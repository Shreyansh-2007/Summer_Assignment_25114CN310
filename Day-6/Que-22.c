//Write a program to Convert binary to decimal
#include<stdio.h>
#include<math.h>

int main()
{
    int decimal = 0, i = 0, remainder;
    long long binary;
    printf("Enter a binary number : ");
    scanf("%lld", &binary);
    while(binary != 0) {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        binary = binary / 10;
        i++;
    }
    printf("Decimal : %d\n", decimal);
    return 0;
}