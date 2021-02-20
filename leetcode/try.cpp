#include<bits/stdc++.h>
using namespace std;
void pp(int n){
	if(n==0){
		return;
	}
	pp(n/2);
	cout<<n%2;
}
int main(){
	int n;
	cin>>n;
	pp(n);
}