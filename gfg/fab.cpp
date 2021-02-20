#include <iostream>
using namespace std;
int fab(int n,int dp[]){
    if(n==0 or n==1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans=fab(n-1,dp)+fab(n-2,dp);
    return dp[n]=ans;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	int n,dp[400]={0};
	cin>>n;
	cout<<fab(n,dp)<<endl;
    }
    return 0;
}