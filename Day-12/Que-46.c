//Write a program to Write function for Armstrong
#include<stdio.h>
#include<math.h>

void armstrong(void) {
     int num, originalNum, remainder, digit = 0;
    double result = 0.0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    originalNum = num;
    while(originalNum != 0) {
        originalNum = originalNum / 10;
        digit++;
    }
    originalNum = num;
    while(originalNum != 0) {
        remainder = originalNum % 10;
        result = result + pow(remainder, digit);
        originalNum = originalNum / 10;
    }
    if((int)result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
};
int main(){
    //Function calling
    armstrong();
    return 0;
}