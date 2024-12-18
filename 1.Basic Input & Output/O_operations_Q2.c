//Write a program to convert Fahrenheit to Celsius and Celsius to Fahrenheit.
#include<stdio.h>

int main(){
    int op;
    float far,cel;
    printf("Enter the conversion you need (for(Fahrenheit to celsius enter: 1) for(celsius to Fahrenheit enter: 2))");
    scanf("%d",&op);
    if(op==1){
        printf("Enter Temperature in Fahrenheit :");
        scanf("%f",&far);
        cel = far-32*(0.55);
        printf("Temperature in celsius :%f",cel);
    }
    else if(op==2){
        printf("Enter Temperature in Celsius :");
        scanf("%f",&cel);
        far = cel*(1.8)+32;
        printf("Tem1perature in Fahrenheit :%f",far);
    }
    else{
        printf("Invalid conversion no.");
    }
    return 0;
}