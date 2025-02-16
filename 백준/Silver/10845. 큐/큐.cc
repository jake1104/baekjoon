#include<stdio.h>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    int N;scanf("%d",&N);
    for(int i=0;i<N;i++){
        char c[100000];
        scanf("%s",c);
        if(c[0]=='p'){
            if(c[1]=='u'){
                int z;scanf("%d",&z);
                q.push(z);
            }else{
                if(q.empty())printf("-1\n");
                else{
                    printf("%d\n",q.front());
                    q.pop();
                }
            }
        }else if(c[0]=='f')printf("%d\n",q.empty()?-1:q.front());
        else if(c[0]=='b')printf("%d\n",q.empty()?-1:q.back());
        else if(c[0]=='e')printf("%d\n",q.empty());
        else printf("%d\n",q.size());
    }
}