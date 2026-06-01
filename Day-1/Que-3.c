//Write a program to Find factorial of a number
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter a number : ");
    scanf("%d", &n);  //input a number
    for( i = 1 ; i <= n ; i++)
    {
        fact = fact * i;
    }
    printf("The factoral is : %d", fact);    
    return 0;
}