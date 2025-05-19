#include<iostream>
using namespace std;
int main(){
    int hlo,hhi;cin>>hlo>>hhi;
    int slo,shi;cin>>slo>>shi;
    int vlo,vhi;cin>>vlo>>vhi;
    int R,G,B;cin>>R>>G>>B;
    int M=R>G?R:G;M=M>B?M:B;
    int m=R<G?R:G;m=m<B?m:B;
    int V=M;
    double S=255*(double)(V-m)/V;
    double H;
    if(V==R)H=(double)(60*(double)(G-B))/(V-m);
    if(V==G)H=120+(double)(60*(double)(B-R))/(V-m);
    if(V==B)H=240+(double)(60*(double)(R-G))/(V-m);
    if(H<0)H+=360;
    if(hlo<=H&&H<=hhi&&slo<=S&&S<=shi&&vlo<=V&&V<=vhi)cout<<"Lumi will like it.";
    else cout<<"Lumi will not like it.";
}