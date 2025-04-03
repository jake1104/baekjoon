#include<iostream>
using namespace std;
int main(){
    int N;cin>>N;
    int A,B,C;cin>>A>>B>>C;
    int r=(A<N?A:N)+(B<N?B:N)+(C<N?C:N);
    cout<<r;
}