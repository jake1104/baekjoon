#include<iostream>
using namespace std;
int main(){
    int R,C;cin>>R>>C;
    while(R--){
        for(int i=0;i<C;i++)cout<<'*';
        cout<<endl;
    }
}