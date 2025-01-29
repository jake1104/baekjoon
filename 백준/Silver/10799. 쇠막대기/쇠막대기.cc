#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    scanf("%s", s);
    int l = strlen(s);
    bool ls[100000];
    for (int i=1;i<l;i++) {
        ls[i]=false;
        if (s[i]==')'&&s[i-1]=='(') ls[i]=true;
    }
    int cnt=0;
    int r=0;
    for (int i=0;i<l-1;i++) {
        if (s[i]=='('&&s[i+1]==')') r+=cnt;
        else {
            if(s[i]=='(') {cnt++;r++;}
            else if(s[i]==')'&&s[i-1]!='(') cnt--;
        }
    }
    printf("%d",r);
}