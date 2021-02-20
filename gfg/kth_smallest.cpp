#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,a[10000],k;
	cin>>l;
	for(int i=0;i<l;i++){
		cin>>a[i];
	}
	sort(a,a+l);
	for(int i=0;i<l;i++){
		cout<<a[i]<<" ";
	}
	cin>>k;
	cout<<a[k-1]<<endl;
}