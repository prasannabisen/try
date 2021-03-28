#include<iostream>
using namespace std;
int res[5000000]={1};
int fact(int n){
	if(n==1){
		return 1;
	}
	if(res[n]!=0){
		return res[n];
	}
	int ans=n*fact(n-1);
	return res[n]=ans;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,l[200000],r[200000];
		cin>>n>>m;
		for(int i=0;i<m;i++){
			cin>>l[i]>>r[i];
		}
		int ans=fact(n)/fact(n-2);
		for(int i=1;i<m;i++){
			if(r[i-1]==l[i]){
				m++;
			}
		}
		ans=ans-(m*2);
		cout<<ans<<"\n";
	}
}wea