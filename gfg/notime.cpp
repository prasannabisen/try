#include<iostream>
using namespace std;
int main(){
	int n,h,x;
	int t[100];
	bool flag=0;
	cin>>n>>h>>x;
	for(int i=0;i<n;i++){
		cin>>t[i];
		t[i]=t[i]+x;
	}
	for(int i=0;i<n;i++){
		if(t[i]==h){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}