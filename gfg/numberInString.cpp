#include<bits/stdc++.h>
using namespace std;
int main(){
	int ans=0;
	string s,temp;
	cin>>s;
	for(char c:s){
		temp="";
		if(isdigit(c) and c!='\0'){
			temp+=c;
			c++;
		}
		ans+=stoi(temp);
	}
	cout<<ans;
}