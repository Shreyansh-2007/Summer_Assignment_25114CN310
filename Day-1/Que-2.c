//Write a program to Print multiplication table of a given number
#include<stdio.h>
int main()
{
    int n,i,table;
    printf("Enter a number : ");
    scanf("%d", &n); //take input a number
    for(i=1;i<=10;i++)
    {
        table = n * i;
        printf("\n%d", table);
    }
    return 0;
}