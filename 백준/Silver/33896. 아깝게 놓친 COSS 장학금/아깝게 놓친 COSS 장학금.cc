#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct p{string name;int score,risk,cost,scholarship;};
bool c(p a,p b){
    if(a.scholarship!=b.scholarship)return a.scholarship>b.scholarship;
    if(a.cost!=b.cost)return a.cost<b.cost;
    return a.name<b.name;
}
int main(){
    int n;cin>>n;
    vector<p>a(n);
    for(int i=0;i<n;i++){
        p t;cin>>t.name>>t.score>>t.risk>>t.cost;
        t.scholarship=t.score*t.score*t.score/(t.cost*(t.risk+1));
        a.push_back(t);
    }sort(a.begin(),a.end(),c);cout<<a[1].name;
}