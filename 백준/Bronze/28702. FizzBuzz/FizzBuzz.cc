#include<stdio.h>
#include<string>
using namespace std;
int main(){
    int n;
    for(int i=0;i<3;i++){
        char a[8];scanf("%s",a);
        if(a[0]!='F'&&a[0]!='B')n=stoi(a)-i;
    }
    if((n+3)%15==0)printf("FizzBuzz\n");
    else if((n+3)%3==0)printf("Fizz\n");
    else if((n+3)%5==0)printf("Buzz\n");
    else printf("%d",n+3);
}