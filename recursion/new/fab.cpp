#include<iostream>
using namespace std;

int fab(int n){
	if(n==1||n==0){
		return n;
	}
	int ans=fab(n-1)+fab(n-2);
	cout<<ans<<" ";
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<fab(n);
}
//0 1 1 2 3 5 8