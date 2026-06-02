//Write a program to Reverse a number
#include<stdio.h>
int main()
{
    int n,r,rev = 0;
    printf("Enter a number : ");
    scanf("%d", &n); //Take input
    while(n != 0) {
        r = n % 10;  //Remainder
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("Revered number is : %d", rev);
return 0;
}