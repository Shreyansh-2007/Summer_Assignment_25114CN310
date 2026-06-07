//Write a program to Recursive reverse number
#include<stdio.h>
#include<stdlib.h>

int reverseNumber(int n, int reversed);
int main() {
    int num;
    printf("Enter an integer: ");
    if(scanf("%d", &num) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    int sign = (num < 0) ? -1 : 1;
    int positiveNum = abs(num);
    int result = sign * reverseNumber(positiveNum, 0);
    printf("Reversed number: %d\n", result);
    return 0;
}
int reverseNumber(int n, int reversed) {
    if(n == 0) {
        return reversed;
    }
return reverseNumber(n / 10, (reversed * 10) + (n % 10));     
}