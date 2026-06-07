//Write a program to Recursive Fibonacci 
#include<stdio.h>
unsigned long long fibonacci(int n);
int main() {
    int num;
    printf("Enter the position (0 or positive integer): ");
    if(scanf("%d", &num) != 1 || num < 0) {
        printf("Error: Please enter a valid non-negative integer.\n");
        return 1;
    }
    printf("Fibonacci number at position %d = %llu\n", num, fibonacci(num));
    return 0;
}
unsigned long long fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}