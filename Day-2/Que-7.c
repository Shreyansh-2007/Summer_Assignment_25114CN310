//Write a program to Find product of digits
#include<stdio.h>
int main()
{
    int n,r,product = 1;
    printf("Enter a number : ");
    scanf("%d", &n); //take input a number
    if(n == 0)   
    {
        printf("Product of digits are : 0");
    }    else    {
    while(n != 0)
    {
        r = n % 10;
        product = product * r;
        n = n / 10;
    }
    printf("Product of digits are : %d", product);  
}
return 0;
}