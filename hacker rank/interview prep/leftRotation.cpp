#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,3,4,5};
	int l=sizeof(a)/sizeof(a[0]);
	int rot=4;
	for(int i=l-1;i>0;i--){
		int temp=a[(l+i-rot)%l];
		a[(l+i-rot)%l]=a[i];
		a[i]=temp;
		// if(i-rot>=0){
		// 	int temp=a[i-rot];
		// 	a[i-rot]=a[i];
		// 	a[i]=temp;
		// }
		// else{
		// 	int temp=a[l+i-rot];
		// 	a[l+i-rot]=a[i];
		// 	a[i]=temp;
		// }
	}
	for(int i=0;i<l;i++){
		cout<<a[i]<<" ";
	}
}