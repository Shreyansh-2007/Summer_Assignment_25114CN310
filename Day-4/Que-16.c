//Write a program to Print Armstrong number in a range
#include<stdio.h>
#include<math.h>
int main()
{
    int lower, upper, i, num, remainder, digit;
    double result;
    printf("Enter the first number of the range: ");
    scanf("%d", &lower);
    printf("Enter the last number of the range: ");
    scanf("%d", &upper);
    printf("Armstrong numbers are : ");
    for(i=lower;i<=upper;i++)
    {
        num = i;
        digit = 0;
        result = 0.0;
        while(num != 0) {
            num = num / 10;
            digit++;
        }
        num = i;
        while(num != 0) {
            remainder = num % 10;
            result = result + pow(remainder, digit);
            num = num / 10;
        }
        if((int)result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}