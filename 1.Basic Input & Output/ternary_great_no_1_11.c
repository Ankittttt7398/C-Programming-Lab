#include <stdio.h>

int main() {
    
    int a,b,c;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    // Using ternary operator to find the greatest number
    int greatest = (a >= b && a >= c) ? a : ((b >= c) ? b : c);

    // Print the greatest number
    printf("The greatest number is: %d\n", greatest);

    return 0;
}