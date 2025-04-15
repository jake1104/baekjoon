#include<iostream>
#include<string.h>
using namespace std;
int N;
int d,e,h,l,o,r,w;
int main(){
	cin>>N;
    bool c=1;
    for(d=0;d<9&&c;d++){
        for(e=0;e<=9&&c;e++){
            for(h=1;h<=9&&c;h++){
                for(l=0;l<=9&&c;l++){
                    for(o=0;o<=9&&c;o++){
                        for(r=0;r<=9&&c;r++){
                            for(w=1;w<=9&&c;w++){
                                if(d!=e&&d!=h&&d!=l&&d!=o&&d!=r&&d!=w&&e!=h&&e!=l&&e!=o&&e!=r&&e!=w&&h!=l&&h!=o&&h!=r&&h!=w&&l!=o&&l!=o&&l!=r&&l!=w&&o!=r&&o!=w&&r!=w){
                                    if((h*10000+e*1000+l*100+l*10+o)+(w*10000+o*1000+r*100+l*10+d)==N){
                                        c=0;
                                        cout<<"  "<<h<<e<<l<<l<<o<<endl;
                                        cout<<"+ "<<w<<o<<r<<l<<d<<endl;
                                        cout<<"-------"<<endl;
                                        for(int i=0;i<7-to_string(N).size();i++)cout<<" ";
                                        cout<<N;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }if(c)cout<<"No Answer";
}