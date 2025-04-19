#include<iostream>
#include<vector>
#include<complex>
#include<cmath>
using namespace std;
typedef long long ll;
typedef vector<ll>vl;
typedef complex<double>cpx;
void fft(vector<cpx>& a,bool inv){
    int n=a.size();
    for(int i=1,j=0;i<n;i++){
        int bit=n>>1;
        for(;j>=bit;bit>>=1)j-=bit;
        j+=bit;
        if(i<j)swap(a[i],a[j]);
    }for(int len=2;len<=n;len<<=1){
        double ang=2*M_PI/len*(inv?-1:1);
        cpx wlen(cos(ang),sin(ang));
        for(int i=0;i<n;i+=len){
            cpx w(1);
            for(int j=0;j<len/2;j++){
                cpx u=a[i+j],v=a[i+j+len/2]*w;
                a[i+j]=u+v;
                a[i+j+len/2]=u-v;
                w*=wlen;
            }
        }
    }if(inv)for(int i=0;i<n;i++)a[i]/=n;
}
vector<cpx>cv(const vector<cpx>&a,const vector<cpx>&b){
    int s=1;while(s<a.size()+b.size())s<<=1;
    vector<cpx> fa(a.begin(),a.end()),fb(b.begin(),b.end());
    fa.resize(s);fft(fa,false);
    fb.resize(s);fft(fb,false);
    for(int i=0;i<s;i++)fa[i]*=fb[i];
    fft(fa,true);
    return fa;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vl cnt(n,0);for(int c=1;c<n;c++)cnt[(ll)c*c%n]++;
    vl A(n,0);for(int a=1;a<n;a++)A[(ll)a*a%n]++;
    vector<cpx>conv=cv(vector<cpx>(A.begin(),A.end()),vector<cpx>(A.begin(),A.end()));
    int S=conv.size();
    vl T(n,0);
    for(int t=0;t<S;t++){
        int s=t%n;
        T[s]+=ll(round(conv[t].real()));
    }
    vl E(n,0);for(int a=1;a<n;a++)E[2LL*a*a%n]++;
    ll res=0;for(int s=0;s<n;s++)res+=(T[s]+E[s])/2*cnt[s];
    cout<<res;
}