    #include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, result;
    char operator;

    // Input two integer numbers and an operator
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);  

   
    result = (operator == '+') ? (num1 + num2) :
            (operator == '-') ? (num1 - num2) :
            (operator == '*') ? (num1 * num2) :
            (operator == '/') ? (num2 != 0 ? num1 / num2 : 0) : 0;

    // Check if the operator was valid
    if (operator == '+' || operator == '-' || operator == '*' || operator == '/') {
        printf("Result: %d\n", result);
    } else {
        printf("Invalid operator entered.\n");
    }

    return 0;
}