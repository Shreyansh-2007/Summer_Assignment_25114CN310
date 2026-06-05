//Write a program to Print factors of a number
#include<stdio.h>
#include<math.h>
void printPrimeFactors(int n) {    
        while(n % 2 == 0) {
            printf("%d ", 2);
            n = n / 2;
        }
        for(int i = 3; i <= sqrt(n); i = i + 2) {
        while(n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if(n > 2) {
        printf("%d", n);
    }
    printf("\n");    
    }
int main()
{
    int number;
    printf("Enter a positive integer : ");
    scanf("%d", &number);
    if(number <= 1) {
        printf("Numbers less than or equal to 1 do not have prime factor.\n");
    } else {
        printf("Prime factors of %d are : ", number);
        printPrimeFactors(number);
    }
    return 0;  
} 
