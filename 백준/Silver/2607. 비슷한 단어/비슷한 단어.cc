#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
	int n;cin>>n;
	string s;cin>>s;
	int lc[26];for(int i=0;i<26;i++)lc[i]=0;
	int sl=s.size();
	for(int i=0;i<sl;i++)lc[s[i]-'A']+=1;
	int cnt=0;
	for(int i=0;i<n-1;i++){
		string t;cin>>t;
		int tl=t.size();
		int ccopy[26];
		copy(lc,lc+26,ccopy);
		int se=0;
		for (int i=0;i<tl;i++) {
			if (ccopy[t[i] - 'A'] > 0) {
				ccopy[t[i] - 'A']--;
				se++;
			}
		}
		if(sl==tl)cnt+=se==sl||se==sl-1;
		else if(sl-1==tl&&se==sl-1)cnt++;
		else if(sl+1==tl&&se==sl)cnt++;
		else continue; 
	}cout<<cnt;	
}