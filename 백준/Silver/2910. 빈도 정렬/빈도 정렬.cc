#include<iostream>
#include<unordered_map>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool f(pair<int,pair<int,int>>a,pair<int,pair<int,int>>b){
    if(a.second.first!=b.second.first)return a.second.first>b.second.first;
    return a.second.second<b.second.second;
}int main(){
    int N,C;cin>>N>>C;
    unordered_map<int,pair<int,int>>CF;
    vector<int>K;
    vector<pair<int,pair<int,int>>>cf;
    for(int i=0;i<N;i++){
        int t;cin>>t;
        if(CF.find(t)==CF.end()){
            CF.insert(make_pair(t,make_pair(1,i)));
            K.push_back(t);
        }else CF[t].first++;
    }for(int i:K)cf.push_back(make_pair(i,CF[i]));
    sort(cf.begin(),cf.end(),f);
    for(auto i:cf)for(int j=0;j<i.second.first;j++)cout<<i.first<<' ';
}