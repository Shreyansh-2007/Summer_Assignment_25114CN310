//Write a program to Find largest prime factor
#include<stdio.h>
#include<math.h>
int maxPrimeFactor(int n) {
    int maxFactor = -1;
    while(n % 2 == 0) {
        maxFactor = 2;
        n = n / 2;
    }
    for(int i = 3; i <= sqrt(n); i = i +2) {
        while(n % i == 0) {
            maxFactor = i;
            n = n / i;
        }
    }
    if(n > 2) {
        maxFactor = n;
    }
    return maxFactor;
 }
 int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if(number <= 1) {
        printf("Numbers less than or equal to 1 do not have prime factors.\n");
    } else {
        printf("The largest prime factor of %d is: %d\n", number, maxPrimeFactor(number));
    }
    return 0;
 }