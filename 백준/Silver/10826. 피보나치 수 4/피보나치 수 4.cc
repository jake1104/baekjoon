#include<bits/stdc++.h>
using namespace std;
string f(const string&a,const string&b){
    string A=a,B=b;
    if (A.size()<B.size())swap(A, B);
    int carry=0;
    int ai=A.size()-1;
    int bi=B.size()-1;
    string res="";
    while(ai>=0||bi>=0||carry){
        int x=(ai>=0? A[ai]-'0':0);
        int y=(bi>=0? B[bi]-'0':0);
        int s=x+y+carry;
        res.push_back((s%10)+'0');
        carry=s/10;
        ai--;bi--;
    }reverse(res.begin(), res.end());
    return res;
}int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);
    int n;cin>>n;
    if(n<2){cout<<n;return 0;}
    string a="0";
    string b="1";
    for(int i=2;i<=n;i++){
        string c=f(a,b);
        a=b;b=c;
    }cout<<b;
}