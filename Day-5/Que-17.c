//Write a program to Check perfect number
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n <= 1) {
        printf("%d is NOT a perfect number.\n", n);
        return 0;
    }
    for(i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            sum = sum + i;
        }
    }
    if(sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is NOT a perfect number.\n", n);
    }
    return 0;
}