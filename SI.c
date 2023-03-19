#include<stdio.h>

int main(){

    float principal, rate, time;

    printf("Enter the principal amount, rate and time: ");
    scanf("%f %f %f",&principal, &rate, &time);

    float simple_interest = (principal * rate * time) / 100;

    printf("The simple interest is %f",simple_interest);

    return 0;
}