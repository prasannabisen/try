#include<iostream>
using namespace std;

int storeOcc(int *a,int i,int n,int key,int *out,int j){
	
}

void allOcc(int *a,int i,int n,int key){
	if(i==n){
		return;
	}
	if(a[i]==key){
		cout<<i<<",";
	}
	allOcc(a,i+1,n,key);
}

int main(){
	int a[]={};
	int n=sizeof(a)/sizeof(a[0]);
}