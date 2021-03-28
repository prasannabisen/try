#include<iostream>
using namespace std;
int fact(int n,int arr[]){
	if(n==1){
		return 1;
	}
	if(arr[n]!=0){
		return arr[n];
	}
	int ans=(n*fact(n-1,arr))%1000000007;
	return arr[n]=ans;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		int arr[100000]={0};
		int f;
		cin>>f;
		cout<<fact(f,arr)<<"\n";
	}
	return 0;
}