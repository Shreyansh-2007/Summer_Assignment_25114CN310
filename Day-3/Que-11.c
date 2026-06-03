//Write a program to Find GCD of two numbers
#include<stdio.h>
int main()
{
    int n1, n2, a, b, temp;
    printf("Enter first number : ");
    scanf("%d", &n1);
    printf("Enter second number : ");
    scanf("%d", &n2);
    a = n1;
    b = n2;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD of %d and %d : %d", n1, n2, a);
    return 0;
}