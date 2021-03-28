#include<stdio.h>
struct student{
	char name[100];
	char branch[100];
};

int main(){
	int j=0,i=0;
	struct student s[5];
	for(int i=0;i<5;i++){
		printf("enter name no %d:-",i);
		scanf("%s",s[i].name);	
		printf("enter branch of %s:-",s[i].name);
		scanf("%s",s[i].branch);
	}
	for(int i=0;i<5;i++){
		int cmp=0;
		for(int j=i;j>0;j--){
			if(s[i].branch==s[j].branch){
				cmp=1;
			}
		}
		if(cmp==0){
			for(int j=0;j<5;j++){
				if(s[i].branch==s[j].branch){
					printf("%s",s[j].branch);
				}
			}
		}
	}
}