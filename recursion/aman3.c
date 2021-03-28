#include<stdio.h>
int main(){
	int a[4][4];
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("enter element in [%d] [%d]:-",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(i==j){
				a[i][j]=0;
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}