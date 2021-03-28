#include<iostream>
using namespace std;

int pattern(int i,int n){
	if(i<1 or n<4){
		return 1;
	}
	int ans=pattern(i,n-1)+pattern(i-4,n);
	return ans;
}

int main(){
	int i,n;
	cin>>n;
	cout<<pattern(4,n);
}