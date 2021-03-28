#include<bits/stdc++.h>
using namespace std;
int rotateWord(char *input1,int input2){
	string s;
	while(*input1!='\0'){
		s+=*input1;
		input1++;
	}
	string temp=s;
	int len=s.length()-input2;
	reverse(s.begin(), s.begin()+len);
    reverse(s.begin()+len, s.end());
    reverse(s.begin(), s.end());
    int ans=0,i=0;
    for(int i=0;s[i]!='\0';i++){
    	if(s[i]==temp[i]){
    		ans++;
    	}
    }
    return ans;
 }
int main(){
	int d;
	char s[]="adaada";
	cin>>d;
	cout<<rotateWord(s,d);
}