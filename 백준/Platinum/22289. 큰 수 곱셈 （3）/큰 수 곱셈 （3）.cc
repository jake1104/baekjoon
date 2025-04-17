#include<iostream>
#include<vector>
#include<complex>
#include<cmath>
#include<algorithm>
using namespace std;
void fft(vector<complex<double>>&a,bool invert){
    int n=a.size(),log_n=0;
    while((1<<log_n)<n)++log_n;
    vector<int>rev(n);
    for(int i=0;i<n;++i)rev[i]=(rev[i>>1]>>1)|((i&1)<<(log_n-1));
    for(int i=0;i<n;++i)if(rev[i]>i)swap(a[i],a[rev[i]]);
    for(int len=2;len<=n;len<<=1){
        double angle=2*M_PI/len*(invert?-1:1);
        complex<double>wn(cos(angle),sin(angle));
        for(int i=0;i<n;i+=len){
            complex<double>w(1);
            for(int j=0;j<len/2;++j){
                complex<double>u=a[i+j],v=a[i+j+len/2]*w;
                a[i+j]=u+v,a[i+j+len/2]=u-v,w*=wn;
            }
        }
    }
    if(invert)for(int i=0;i<n;++i)a[i]/=n;
}vector<int>multiply(const vector<int>&a,const vector<int>&b){
    vector<complex<double>>fa(a.begin(),a.end()),fb(b.begin(),b.end());
    int n=1;while(n<a.size()+b.size())n<<=1;
    fa.resize(n),fb.resize(n);
    fft(fa,false),fft(fb,false);
    for(int i=0;i<n;++i)fa[i]*=fb[i];
    fft(fa,true);
    vector<int>result(n);
    for(int i=0;i<n;++i)result[i]=round(fa[i].real());
    int carry=0;
    for(int i=0;i<n;++i)result[i]+=carry,carry=result[i]/10,result[i]%=10;
    while(result.size()>1&&result.back()==0)result.pop_back();
    return result;
}int main(){
    string num1,num2;
    cin>>num1>>num2;
    vector<int>a,b;
    for(char c:num1)a.push_back(c-'0');
    for(char c:num2)b.push_back(c-'0');
    reverse(a.begin(),a.end()),reverse(b.begin(),b.end());
    vector<int>result=multiply(a,b);
    reverse(result.begin(),result.end());
    for(int digit:result)cout<<digit;
    cout<<endl;
}