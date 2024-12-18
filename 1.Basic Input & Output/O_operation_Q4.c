// Write a program to Calculate area and perimeter of a circle.

#include<stdio.h>

int main()
{
    int r;
    float area,para;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    area= 3.14*r*r;
    para = 2*3.14*r;
    printf("Area of circle is %.2f %.2f",area,para);
    return 0;
}