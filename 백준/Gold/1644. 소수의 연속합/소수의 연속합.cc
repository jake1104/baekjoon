#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;cin>>N;bool d[N+1]={1,1,0,};
    vector<int>P,S;for(int i=2;i<=N;i++){
        if(!d[i]){
            if(i==2)S.push_back(2);
            else S.push_back(i+S.back());
            P.push_back(i);
            for(int j=2;i*j<=N;j++)d[i*j]=1;
        }
    }int s=0,e=0,r=0;
    while(e<P.size()){
        int t=S[e]-S[s]+P[s];
        if(t>N){
            s++;
            if(s>e)break;
        }else{
            if(t==N)r++;
            e++;
        }
    }cout<<r;
}