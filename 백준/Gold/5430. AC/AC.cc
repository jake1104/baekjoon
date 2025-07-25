#include<iostream>
#include<deque>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int T;cin>>T;
    while(T--){
        string p,I;int n,t=0;cin>>p>>n>>I;
        deque<int>q;
        for(int i=1;i<I.size()-1;i++){
            if(I[i]==','){
                if(t!=0||(i>1&&I[i-1]>='0'&&I[i-1]<='9'))q.push_back(t);
                t=0;
            }else t=t*10+I[i]-'0';
        }if(n>0)q.push_back(t);
        bool r=0,e=0;
        for(int i=0;i<p.size()&& !e;i++){
            if(p[i]=='R')r=!r;
            else{
                if(q.empty())e=1;
                else{
                    if(r)q.pop_back();
                    else q.pop_front();
                }
            }
        }if(e)cout<<"error\n";
        else{
            cout<<'[';if(r){
                while(q.size()>1){
                    cout<<q.back()<<',';
                    q.pop_back();
                }if(!q.empty()) cout<<q.back();
            }else{
                while(q.size()>1){
                    cout<<q.front()<<',';
                    q.pop_front();
                }if(!q.empty()) cout<<q.front();
            }cout<<"]\n";
        }
    }
}