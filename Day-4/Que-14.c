//Write a program to Find nth Fibonacci term
#include<stdio.h>
int main()
{
    int n, i;
    long long t1 = 0, t2 = 1, next;
    printf("Enter the terms n : ");
    scanf("%d", &n);
    if( n == 1)
    {
        printf("The %dth Fibonacci term is %lld\n", n , t1);
    } else if(n == 2)
    {
        printf("The %dth Fibonacci term is %lld\n", n, t2);
    } else {
        for (i=3; i<= n; i++)
        {
            next = t1 + t2;
            t1 = t2;
            t2 = next;
        }
        printf("The %dth Fibonacci term is %lld\n", n , t2);
    }
    return 0;
}