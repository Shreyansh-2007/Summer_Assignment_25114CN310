//Write a program to Recursive factorial
#include<stdio.h>
unsigned long long factorial(int n);

int main()
{
    int num;
    printf("Enter a positive integer: ");
    if(scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }
    printf("Factorial of %d = %llu\n", num , factorial(num));
    return 0;
}
unsigned long long factorial(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
