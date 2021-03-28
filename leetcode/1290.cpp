#include<iostream>
using namespace std;
int main(){
	int a[]={1,0,0,1,0,0,1,1,1,0,0,0,0,0,0};	
	int n=sizeof(a)/sizeof(a[0]);
	int p=1,ans=0;
	for(int i=n-1;i>=0;i--){
		ans+=a[i]*p;
		p=(p<<1);
	}
	cout<<ans;
}