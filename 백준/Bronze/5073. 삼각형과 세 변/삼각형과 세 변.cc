#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int A[3];while(1){
        cin>>A[0]>>A[1]>>A[2];
        if(A[0]==0)return 0;
        sort(A,A+3);
        if(A[0]+A[1]<=A[2])cout<<"Invalid\n";
        else{
            if(A[0]==A[1]){
                if(A[1]==A[2])cout<<"Equilateral\n";
                else cout<<"Isosceles\n";
            }else if(A[0]==A[2]||A[1]==A[2])cout<<"Isosceles\n";
            else cout<<"Scalene\n";
        }
    }
}