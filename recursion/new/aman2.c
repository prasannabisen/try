#include<stdio.h>
int main(){
	int a,temp,ans=0;
	scanf("%d",&a);
	temp=a;
	while(temp>0){
		int digit=temp%10;
		ans=(ans*10)+digit;
		temp/=10;
	}
	if(a==ans){
		printf("PALINDROME");
	}
	else{
		printf("NOT PALINDROME");
	}
}