#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,-3,6,2,-5},ans=INT_MIN;
	int l=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<l-3;i++){
		int temp=1;
		for(int j=i;j<i+4 and j!=l;j++){
			cout<<a[j]<<" ";
			temp*=a[j];
		}
		cout<<endl<<temp<<endl;
		ans=max(ans,temp);
	}
	// cout<<ans<<endl;
}