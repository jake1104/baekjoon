#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    string r=to_string(a/b);
    long long rem=a%b;
    if(rem==0){cout<<r<<endl;return 0;}
    r+='.';
    string d="";
    map<long long,int> m;
    while(rem){
        if(m.count(rem)){
            int s=m[rem];
            string nr=d.substr(0,s), rep=d.substr(s);
            d=nr;
            while(d.size()<2000)for(char c:rep){d+=c;if(d.size()>=2000)break;}
            break;
        }
        m[rem]=d.size();
        rem*=10;
        long long dig=rem/b;
        d+=to_string(dig);
        rem%=b;
        if(d.size()>=2000)break;
    }
    if(d.size()>2000)d=d.substr(0,2000);
    r+=d;
    cout<<r<<endl;
    return 0;
}