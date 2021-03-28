#include<iostream>
using namespace std;
int fab(int n){
	if(n==1 or n==0){
		return n;
	}
	int ans=0;
	ans=fab(n-1)+fab(n-2);
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<fab(n);
}