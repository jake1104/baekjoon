#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    vector<int>A(N+1);
    for (int i=1;i<=N;++i)cin >> A[i];
    int Q;
    cin>>Q;
    vector<long long>lazy(N+1,0); 
    for(int i=0;i<Q;++i){
        int q,s,e;
        cin>>q>>s>>e;
        if(q==1){
            for(int j=s;j<=e;++j)A[j] += 1;
        }else if(q==2){
            long long sum=0;
            for(int j=s;j<=e;++j)sum += A[j] % K;
            cout<<sum<<endl;
        }
    }
    return 0;
}
