#include <iostream>
#include <string>
using namespace std;

bool p(const string& str) {int l=0, r=str.length()-1;while(l<r){if (str[l]!=str[r]) {return false;}l++;r--;}return true;}
int pp(const string& str) {int l=0, r=str.length()-1;while(l<r){if (str[l]!=str[r]) {string s1=str.substr(l+1,r-l);string s2 = str.substr(l,r-l);if(p(s1)||p(s2))return 1;return 2;}l++;r--;}return 0;}
int main() {int t;cin >> t;cin.ignore();while(t--){string str;getline(cin, str); cout << pp(str) << endl;}}
