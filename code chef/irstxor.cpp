#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int d=1;
		while(n>=d){
			d=d<<1;
		}
		d/=2;
		d-=1;
		long long int ans=(d^n)*d;
		cout<<ans<<"\n";
	}
}