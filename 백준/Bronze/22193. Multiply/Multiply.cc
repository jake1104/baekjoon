#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string add(string a,string b){
    string result;
    int carry = 0;
    int i=a.size()-1,j=b.size()-1;
    while(i>=0||j>=0||carry>0){
        int sum=carry;
        if(i>=0)sum+=a[i--]-'0';
        if(j>=0)sum+=b[j--]-'0';
        carry=sum/10;
        result.push_back((sum%10)+'0');
    }
    reverse(result.begin(),result.end());
    return result;
}
string subtract(string a,string b){
    string result;
    int borrow = 0;
    int i=a.size()-1,j=b.size()-1;
    while(i >= 0 || j >= 0) {
        int digit_a=i>=0?a[i--]-'0':0;
        int digit_b=j>=0?b[j--]-'0':0;
        digit_a-=borrow;
        if(digit_a<digit_b){
            digit_a+=10;
            borrow=1;
        }else borrow=0;
        int digit=digit_a-digit_b;
        result.push_back(digit+'0');
    }
    while(result.size()>1&&result.back()=='0')result.pop_back();
    reverse(result.begin(),result.end());
    return result;
}

string karatsuba(string x,string y){
    x.erase(0,x.find_first_not_of('0'));
    if(x.empty())x="0";
    y.erase(0,y.find_first_not_of('0'));
    if(y.empty())y="0";
    if(x == "0" || y == "0") return "0";
    int len_x = x.size(), len_y = y.size();
    if(len_x==1&&len_y==1)return to_string((x[0]-'0')*(y[0]-'0'));
    int max_len=max(len_x,len_y);
    x=string(max_len-len_x,'0')+x;
    y=string(max_len-len_y,'0')+y;
    int half = max_len / 2;
    string x_high=x.substr(0,max_len-half);
    string x_low=x.substr(max_len-half);
    string y_high=y.substr(0,max_len-half);
    string y_low=y.substr(max_len-half);
    string z0=karatsuba(x_low,y_low);
    string z1=karatsuba(add(x_high,x_low),add(y_high,y_low));
    string z2=karatsuba(x_high,y_high);
    string temp=subtract(subtract(z1,z2),z0);
    string part1=z2+string(2*half,'0');
    string part2=temp+string(half,'0');
    string result=add(add(part1, part2),z0);
    result.erase(0,result.find_first_not_of('0'));
    return result.empty()?"0":result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    cout<<karatsuba(a,b)<<'\n';
    return 0;
}