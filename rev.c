#include<stdio.h>
void rev(int n){
    if(n==0){
        return ;
    }
    printf("%d",n);
    rev(n-1);
}
void main(){
    int n;
    scanf("%d",&n);
    rev(n);
}