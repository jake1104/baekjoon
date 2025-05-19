#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int N,K;cin>>N>>K;string S;cin>>S;
    vector<int> lmax(N+1,0),rmax(N+1,0);
    for(int i=1;i<=N;++i)for(int a=0;a<i-1;++a)for(int b=a+1;b<i;++b)if(S[a]==S[b]&&S[a]!='X')lmax[i]=max(lmax[i],b-a+1);
    for(int j=N-1;j>=0;--j)for(int c=j+1;c<N;++c)for(int d=c+1;d<N;++d)if(S[c]==S[d]&&S[c]!='X')rmax[j]=max(rmax[j],d-c+1);
    array<vector<int>,26> pos;for(int i=0;i<N;++i)if(S[i]!='X')pos[S[i]-'A'].push_back(i);
    int mn=N;
    for(int i=0;i<N;++i)for(int j=i+1;j<N;++j)if(S[i]==S[j]&&S[i]!='X')mn=min(mn,N-(j-i+1));
    for(int i=0;i<N;++i)for(int j=i+1;j<N;++j)if(S[i]==S[j]&&S[i]!='X'){
        int d1=j-i+1,mod_len=N-d1,cur_max=max(lmax[i],rmax[j]),max_cross=0;
        for(char c='A';c<='Z';++c){
            if(c=='X'||pos[c-'A'].empty())continue;
            const vector<int>& lst=pos[c-'A'];
            auto it_l=upper_bound(lst.begin(),lst.end(),i-1);
            int lcnt=it_l-lst.begin();if(lcnt==0)continue;
            int min_a=lst[0];
            auto it_r=upper_bound(lst.begin(),lst.end(),j);
            int rcnt=lst.end()-it_r;if(rcnt==0)continue;
            int max_c=lst.back();max_cross=max(max_cross,(max_c-min_a)+(i-j));
        }
        cur_max=max(cur_max,max_cross);mn=min(mn,mod_len-cur_max);
    }
    cout<<mn<<endl;
    return 0;
}