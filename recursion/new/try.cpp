#include<iostream>
using namespace std;

int pow(int a,int b){
	if(b==0){
		return 1;
	}
	int i=a*pow(a,b-1);
	return i;
}

int fast(int a,int b){
	if(b==0){
		return 1;
	}
	int ans=fast(a,b/2);
	ans*=ans;
	if(b&1){
		ans*=a;
	}
	return ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<"\n";
	cout<<fast(a,b)<<"\n";
}