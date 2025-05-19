#include<iostream>
#include<string>
using namespace std;
int main(){
    int N;cin>>N;
    string slogan;cin>>slogan;
    int sum=0,num=0;
    for(char c:slogan){
        if(isdigit(c))num=num*10+(c-'0');
        else{
            sum+=num;
            num=0;
        }
    }
    sum+=num;
    cout<<sum;
}