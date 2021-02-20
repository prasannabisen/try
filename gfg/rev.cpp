#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	int digit,ans=0;
        while(N>0){
            digit=N%10;
            ans+=digit;
            N/=10;
        }
        int ans2=0,temp=ans;
        while(temp>0){
            digit=temp%10;
            ans2=(ans2*10)+digit;
            temp/=10;
        }
        cout<<ans<<"\n"<<ans2;
        if(ans==ans2){
            cout<<"matched";
        }
        else{
            cout<<"not matched";
        }
}