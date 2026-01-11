#include<iostream>
using namespace std;
int main(){
    string I;
    while(1){
        cin>>I;
        if(I=="end")break;
        int s=0;
        for(char i:I){
            if(i<='9')s+=i-'0';
            else if(i<='Z')s+=i-'A'+10;
            else s+=i-'a'+10+26;
        }cout<<(s%61?"no":"yes")<<endl;
    }
}