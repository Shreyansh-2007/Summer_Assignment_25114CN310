//Write a program to Check strong number
#include<stdio.h>
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int number, originalNumber, remainder, sum = 0;
    printf("Enter an integer : ");
    scanf("%d", &number);

    originalNumber = number;
    while(number > 0) {
        remainder = number % 10;
        sum = sum + factorial(remainder);
        number = number / 10;
    }
    if(sum == originalNumber && originalNumber > 0) {
        printf("%d is a strong number.\n", originalNumber);
    } else {
        printf("%d is NOT a strong number.\n", originalNumber);
    }
    return 0;
}