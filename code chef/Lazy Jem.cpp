#include<bits/stdc++.h>
using namespace std;
int main(){
	int l;
	cin>>l;
	while(l)
	{
		long long int n,b,m,ans=0;
		cin>>n>>b>>m;
		while(n!=0){
			int r=0;
			if((n&1)==0){
				r=n/2;}
			else{
				r=(n+1)/2;
			}
			ans+=(r*m);
			n/=2;
			if(n!=0){
				ans+=b;
				m*=2;
			}
		}
		cout<<ans<<endl;
		l--;
	}
}