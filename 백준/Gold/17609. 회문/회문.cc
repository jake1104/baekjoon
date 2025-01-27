#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int is_pseudopalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            string modified_str1 = str.substr(left + 1, right - left);
            string modified_str2 = str.substr(left, right - left);
            if (is_palindrome(modified_str1) || is_palindrome(modified_str2)) {
                return 1;
            }
            return 2;
        }
        left++;
        right--;
    }
    return 0;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        getline(cin, str);
        cout << is_pseudopalindrome(str) << endl;
    }
    return 0;
}
