//Write a program to input and add two numbers.
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter two numbers");
    scanf("%d %d",&num1,&num2);
    sum = num1 + num2;
    printf("the sum is : %d",sum);
}