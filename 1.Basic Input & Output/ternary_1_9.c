#include<stdio.h>

int main(){
    int a,b,great;
    printf("enter first and second no.: ");
    scanf("%d%d",&a,&b);

    great=(a>b)?a:b;
    printf("greatest no. %d",great);

    return 0;
}