#include<iostream>
using namespace std;
int power(int a,int b){
	if(b==0){
		return 1;
	}
	return a*power(a,b-1);
}

int fastpow(int a,int b){
	if(b==0){
		return 1;
	}
	int sub_ans=fastpow(a,b/2);
	sub_ans*=sub_ans;
	if(b&1){
		return sub_ans*a;
	}
	return sub_ans;
}

int main(){
	int a,b;
	cin>>a>>b;
	cout<<power(a,b)<<"\n";
	cout<<fastpow(a,b);
}