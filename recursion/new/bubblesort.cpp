#include<iostream>
using namespace std;

void bubbleSort(int *a,int n){
	if(n==1){
		return ;
	}
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	bubbleSort(a,n-1);
	return;
}

void bubbleSortRecurssion(int *a,int n,int j=0){
	if(n==1){
		return;
	}
	if(j==n-1){
		return ;
	}
	if(a[j]>a[j+1]){
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	bubbleSortRecurssion(a,n,j+1);
	bubbleSortRecurssion(a,n-1,0);
	return;
}

int main(){
	int a[]={500,10,11,9,7,5,4,3,1,100};
	int b[]={500,10,11,9,7,5,4,3,1,100};
	int n=sizeof(a)/sizeof(a[0]);
	bubbleSort(a,n);
	bubbleSortRecurssion(b,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
}