#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,ans=0;
		cin>>a;
		while(a){
			if(a&1){
				ans++;
			}
			a=a>>1;
		}
		cout<<ans<<"\n";
	}
}