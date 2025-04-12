#include<iostream>
using namespace std;
struct p{int x,y;};
int main(){
	int w,h,c,t1,t2,s=0;
	int d[2];
	cin>>w>>h>>c;
	p l[c];
	for(int i=0;i<c;i++)cin>>l[i].x>>l[i].y;
	cin>>d[0]>>d[1];
	for(int i=0;i<c;i++){
		if(d[0]==l[i].x)s+=abs(d[1]-l[i].y);
		else if(d[0]==1||d[0]==2){
			if(l[i].x==3||l[i].x==4){
				if(l[i].x==3)s+=d[1];
				else s+=w-d[1];
				if(d[0]==1)s+=l[i].y;
				else s+=h-l[i].y;
			}else{
				if(h+l[i].y+d[1]>h+w)s+=2*(w+h)-(h+l[i].y+d[1]);
				else s+=h+l[i].y+d[1];
			}
		}
		else{
			if(l[i].x==1||l[i].x==2){
				if(l[i].x==1)s+=d[1];
				else s +=h-d[1];
				if(d[0]==3)s+=l[i].y;
				else s+=w-l[i].y;
			}else{
				if(w+l[i].y+d[1]>h+w)s+=2*(w+h)-(w+l[i].y+d[1]);
				else s+=w+l[i].y+d[1];
			}
		}
	}cout<<s;
}