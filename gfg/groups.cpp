#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans[n]={0};
	string s[n];
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		int t=0;
		while(s[i][t]!='\0'){
			if(s[i][t]=='1' and s[i][t+1]=='0'){
				ans[i]++;
			}
			if(s[i][t]=='1' and s[i][t+1]=='\0'){
				ans[i]++;
			}
			t++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<"\n";
	}
}