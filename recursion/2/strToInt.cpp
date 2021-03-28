#include<bits/stdc++.h>
using namespace std;

int strToInt(char *a,int n){
	if(n==0){
		return a[0]-'0';
	}
	int i=(strToInt(a,n-1)*10)+(a[n]-'0');
	return i;
}

int main(){
	char a[]="2552";
	int n=strlen(a);
	cout<<strToInt(a,n-1);
}