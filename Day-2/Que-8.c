//write a program to Check whether a number is palindrome
#include<stdio.h>
int main()
{
    int n,n1,r,rev = 0;
    printf("Enter a number : ");
    scanf("%d", &n); //Take input
    n1 = n;
    while(n != 0) {
        r = n % 10;  //Remainder
        rev = rev * 10 + r;
        n = n / 10;
    }
    if(n1 == rev)
    {
        printf("Palindrome number");
    } else {
        printf("Not a Palindrome number");
    }
return 0;
}