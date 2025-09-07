#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string>f(int n){
    if(n==3){
        return{
            "  *  ",
            " * * ",
            "*****"
        };
    }
    int h=n/2;
    vector<string>u=f(h);
    vector<string>r;
    for(string s:u)r.push_back(string(h,' ')+s+string(h,' '));
    for(string s:u)r.push_back(s+" "+s);
    return r;
}int main(){
    int N;cin>>N;
    vector<string>p=f(N);
    for(int i=0;i<p.size();i++){
        string l=p[i];
        if(i==p.size()-1&&!l.empty()&&l.back()==' ')l.pop_back();
        cout<<l<<' '<<endl;
    }
}