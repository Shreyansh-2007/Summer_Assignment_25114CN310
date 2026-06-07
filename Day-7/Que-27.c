//Write a program to Recursive sum of digits
#include<stdio.h>
#include<stdlib.h>
int sumOfDigits(int n);
int main() {
    int num;
    printf("Enter an integer: ");
    if(scanf("%d", &num) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    int positiveNum = abs(num);
    printf("Sum of digits of %d = %d\n", num, sumOfDigits(positiveNum));
    return 0;
}

int sumOfDigits(int n) {
    if(n == 0) {
        return 0;
    } 
    return (n % 10) + sumOfDigits(n / 10);
}