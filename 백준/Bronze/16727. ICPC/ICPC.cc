#include<iostream>
using namespace std;
int main(){
    int p1,s1;cin>>p1>>s1;
    int s2,p2;cin>>s2>>p2;
    if(p1+p2>s1+s2)cout<<"Persepolis";
    else if(p1+p2<s1+s2)cout<<"Esteghlal";
    else if(s1>p2)cout<<"Esteghlal";
    else if(s1<p2)cout<<"Persepolis";
    else cout<<"Penalty";
}