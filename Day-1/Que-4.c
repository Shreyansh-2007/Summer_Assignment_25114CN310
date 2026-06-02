//Write a program to Count digits in a number
#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number : ");
    scanf("%d", &n); //input number
    if(n == 0)
    {
        printf("Total digits are : 1");
    }    else    {
    while(n != 0)
    {        
        n = n / 10;
        count++;
    }
    printf("Total digits are : %d", count);
}
    return 0;
}