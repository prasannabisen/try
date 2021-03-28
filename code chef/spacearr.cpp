#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,index;
		cin>>n;
		int a[1000000];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		long long int ans=0;
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			if(a[i]<i){
				int diff=(a[i]-i);
				diff=abs(diff);
				ans+=diff;
			}
		}
		if((ans&1)==0){
			cout<<"Second"<<"\n";
		}
		else{
			cout<<"First"<<"\n";
	}
}
}