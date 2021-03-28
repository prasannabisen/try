#include<iostream>
using namespace std;
int lastocc(int *a,int n,int key){
	if(n==0){
		return -1;
	}
	int i=lastocc(a+1,n-1,key);
	if(i==-1){
		if(a[0]==key){
			return 0;
		}
		else{
			return -1;
		}
	}
	return i+1;
}
int main(){
	int a[]={1,2,7,3,7,6};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<lastocc(a,n,7);
}