#include<stdio.h>
int recc(int a){
	if(a==0||a==1){
		return a;
	}
	int ans=recc(a-1)+recc(a-2);
	return ans;
}

int main(){
	int a;
	printf("enter the number of itration:-");
	scanf("%d",&a);
	int ans=recc(a);
	printf("ans:-%d",recc(a));
}