#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[9],s=0;
    for(int i=0;i<9;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+9);
    for(int i=0;i<9;i++){
        for(int j=i+1;j<9;j++){
            if(a[i]!=a[j]&&(s-(a[i]+a[j]))==100){
                for(int k=0;k<9;k++){
                    if(i==k||j==k)continue;
                    else cout<<a[k]<<endl;
                }return 0;
            }
        }
    }

}