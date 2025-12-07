#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int N;cin>>N;
    vector<long>A(N);for(int i=0;i<N;i++)cin>>A[i];
    sort(A.begin(),A.end());
    long M=LONG_MAX;
    long x=0,y=0,z=0;
    for(int i=0;i<N-2;i++){
        int l=i+1;
        int r=N-1;
        while(l<r){
            long s=A[i]+A[l]+A[r];
            if(abs(s)<abs(M))M=s,x=A[i],y=A[l],z=A[r];
            if(s<0)l++;
            else r--;
        }
    }vector<long>o={x,y,z};sort(o.begin(),o.end());
    cout<<o[0]<<" "<<o[1]<<" "<<o[2];
}