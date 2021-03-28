#include<stdio.h>
int main(){
	char a;
	while(1){
		printf("enter the character:-");
		scanf("%s",&a);
		if(a==27){
			break;
		}
		printf("Ascii value:-");
		printf("%d\n",a);
	}
}