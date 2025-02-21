#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
int main(){
    while(true){
        char I[105];fgets(I,105,stdin);
        if (I[0]=='.')break;
        stack<char> s;
        bool c=true;
        for(int i=0;i<strlen(I);i++){
            if(I[i]=='(')s.push('(');
            else if(I[i]=='[')s.push('[');
            else if(I[i]==')'){
                if(!s.empty()&&s.top()=='(')s.pop();
                else{
                    c=false;
                    break;
                }
            }else if(I[i]==']'){
                if(!s.empty()&&s.top()=='[')s.pop();
                else{
                    c=false;
                    break;
                }
            }
        }
        if(s.empty()&&c)printf("yes\n");
        else printf("no\n");
    }
}