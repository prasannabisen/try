#include<iostream>
using namespace std;
void search(int *a,int size,int curr,int f){
	if(curr==size){
		cout<<"not in the array";
		return;
	}
	if(a[curr]==f){
		cout<<"at:-"<<curr<<" ";
		return;
	}
	search(a,size,curr+1,f);
}
int main(){
	int n;
	cin>>n;
	int a[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(a)/sizeof(a[0]);
	search(a,size,0,n);
}