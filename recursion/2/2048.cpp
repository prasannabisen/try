#include<iostream>
using namespace std;

void spell(int n){
	if(n==0){
		return ;
	}
	spell(n/10);
	int c=n%10;
	if(c==1){
		cout<<"one";
	}
	if(c==2){
		cout<<"two";
	}
	if(c==3){
		cout<<"three";
	}
	if(c==4){
		cout<<"four";
	}
	if(c==5){
		cout<<"five";
	}
	if(c==6){
		cout<<"six";
	}
	if(c==7){
		cout<<"seven";
	}
	if(c==8){
		cout<<"eight";
	}
	if(c==9){
		cout<<"nine";
	}
}

int main(){
	int n;
	cin>>n;
	spell(n);
}