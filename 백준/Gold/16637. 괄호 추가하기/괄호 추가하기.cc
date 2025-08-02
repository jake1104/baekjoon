#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int C(int a,int o,int b){
    if(o==0)return a+b;
    if(o==1)return a-b;
    return a*b;
}int f(vector<pair<int,bool>>x){
    if(x.size()==1)return x[0].first;
    vector<int>R;pair<int,bool>t;
    vector<pair<int,bool>>n;for(int j=0;j<x.size();j++){
        if(j==0){
            t.first=C(x[0].first,x[1].first,x[2].first);t.second=0;
            n.push_back(t);
        }
        else if(j!=1&&j!=2)n.push_back(x[j]);
    }R.push_back(f(n));
    for(int i=2;i<x.size()-2;i+=2){
        if((!x[i].second)&&(!x[i+2].second)){
            n.clear();
            vector<pair<int,bool>>n;for(int j=0;j<x.size();j++){
                if(j==i){
                    pair<int,bool>t;t.first=C(x[i].first,x[i+1].first,x[i+2].first);t.second=1;
                    n.push_back(t);
                }else if(j!=i+1&&j!=i+2)n.push_back(x[j]);
            }R.push_back(f(n));
        }
    }int m=-2147483648;
    for(int i=0;i<R.size();i++)m=m>R[i]?m:R[i];
    return m;
}int main(){
    int N;string I;cin>>N>>I;
    vector<pair<int,bool>>A;for(char i:I){
        int t;
        if('0'<=i&&i<='9')t=i-'0';
        else if(i=='+')t=0;
        else if(i=='-')t=1;
        else t=2;
        A.push_back(make_pair(t,0));
    }cout<<f(A);
}