//Write a program to Find LCM of two numbers
#include<stdio.h>
int main()
{
    int n1, n2, a, b, temp, gcd, lcm;
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
    gcd = a;
    lcm = (n1 * n2) / gcd;
    printf("LCM of %d and %d : %d", n1, n2, lcm);
    return 0;
}