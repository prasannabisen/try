#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>a={1,2,3,4,5,6};
	int len=a.size();
	for(int i=0;i<len;i++){
		for(int j=i;j<len;j++){
			for(int k=i;k<=j;k++){
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
}