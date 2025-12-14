#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin>>n;while(n--){
        string I;cin>>I;
        vector<int>c(26,0);
        for(char i:I)c[i-'a']++;
        int s=0;
        sort(c.begin(),c.end(),greater<int>());
        while(c.size()>2){s+=c.back();c.pop_back();}
        cout<<s<<endl;
    }
}