#include<iostream>
using namespace std;

void sort(int *a,int s,int l){
	int mid=(s+l)/2;
	int i=s,j=mid+1;
	int k=s;
	int b[1000];
	while(i<=mid && j<=l){
		if(a[i]<a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
		}
	}
	while(i<=mid){
		b[k++]=a[i++];
	}
	while(j<=l){
		b[k++]=a[j++];
	}
	for(i=s;i<=l;i++){
		a[i]=b[i];
	}
	return;
}

void mergesort(int *a,int s,int l){
	if(s==l){
		return ;
	}
	int mid=(s+l)/2;
	mergesort(a,s,mid);
	mergesort(a,mid+1,l);
	sort(a,s,l);
	return;
}
int main(){
	int a[]={8,9,6,4,7,5,2,1,0};
	int n=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}