#include<iostream>
using namespace std;
int main(){
    int a,b;while(1){
        cin>>a>>b;
        if(a==0)return 0;
        cout<<(a%b?(b%a?"neither\n":"factor\n"):"multiple\n");
    }
}