#include<iostream>
#include<vector>
#include<complex>
#include<cmath>
#include<algorithm>
using namespace std;
void fft(vector<complex<double>>&a,bool invert){
    int n=a.size();
    if(n==1)return;
    vector<complex<double>>even(n/2),odd(n/2);
    for(int i=0;i<n/2;++i)even[i]=a[i*2],odd[i]=a[i*2+1];
    fft(even,invert);fft(odd,invert);
    double angle=2*M_PI/n*(invert?-1:1);
    complex<double>w(1),wn(cos(angle),sin(angle));
    for(int i=0;i<n/2;++i){
        a[i]=even[i]+w*odd[i];
        a[i+n/2]=even[i]-w*odd[i];
        if(invert)a[i]/=2,a[i+n/2]/=2;
        w*=wn;
    }
}
vector<int>multiply(const vector<int>&a,const vector<int>&b){
    vector<complex<double>>fa(a.begin(),a.end()),fb(b.begin(),b.end());
    int n=1;while(n<a.size()+b.size())n<<=1;
    fa.resize(n);fb.resize(n);
    fft(fa,false);fft(fb,false);
    for(int i=0;i<n;++i)fa[i]*=fb[i];
    fft(fa,true);
    vector<int>result(n);
    for(int i=0;i<n;++i)result[i]=round(fa[i].real());
    int carry=0;
    for(int i=0;i<n;++i){
        result[i]+=carry;
        carry=result[i]/10;
        result[i]%=10;
    }
    while(result.size()>1&&result.back()==0)result.pop_back();
    return result;
}
int main(){
    string num1,num2;
    cin>>num1>>num2;
    vector<int>a,b;
    for(char c:num1)a.push_back(c-'0');
    for(char c:num2)b.push_back(c-'0');
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    vector<int>result=multiply(a,b);
    reverse(result.begin(),result.end());
    for(int digit:result)cout<<digit;
    cout<<endl;
}