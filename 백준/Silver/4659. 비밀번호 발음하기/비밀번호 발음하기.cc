#include<iostream>
using namespace std;
bool m(char I){
    return I=='a'||I=='e'||I=='i'||I=='o'||I=='u';
}bool f(string I){
    bool M=0,J=0;int y=0,x=0;
    for(int i=0;i<I.length();i++){
        if(m(I[i])){
            M=1;
            if(J)y=1,J=0;
            else y++;
        }else{
            if(J)y++;
            else J=1,y=1;
        }
        x=x>y?x:y;
        if(i){if(I[i-1]==I[i]&&I[i]!='e'&&I[i]!='o')return 0;}
    }return M&&x<3;
}int main(){
    string t;while(1){
        cin>>t;if(t=="end")return 0;
        if(f(t))cout<<'<'<<t<<"> is acceptable.\n";
        else cout<<'<'<<t<<"> is not acceptable.\n";
    }
}