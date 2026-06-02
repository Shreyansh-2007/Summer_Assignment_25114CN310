//Write a program to Find the sum of digits of a number
#include<stdio.h>
int main()
{
    int n,r,sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);  //take input a number
    if(n == 0)   //if the entered number is zero
    {
        printf("Sum of digits are : 0");
    }    else    {
    while(n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("Sum of digits are : %d", sum);  
}
return 0;
}