#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char I[100];cin>>I;
    int c=0;
    for(int i=0;i<strlen(I);i++)c+=(I[i]=='a'||I[i]=='e'||I[i]=='i'||I[i]=='o'||I[i]=='u');
    cout<<c;
}