//Write a program to Calculate sum of first N natural numbers in c
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a natural number : ");
    scanf("%d", &n);  //take input a natural number
    for( i = 0 ; i <= n ; i++)
    {
        sum = sum + i;
    }
    printf("The sum of n natural number is : %d", sum);    
    return 0;
}