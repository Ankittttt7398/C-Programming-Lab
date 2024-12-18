// Write a program to calculate Area of a rectangle.

#include<stdio.h>

int main()
{
    int area,l,b;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d %d",&l,&b);
    area= l*b;
    printf("Area of rectangle is %d",area);
    return 0;
}