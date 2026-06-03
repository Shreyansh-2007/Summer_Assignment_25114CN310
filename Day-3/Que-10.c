//Write a program to Print prime numbers in a range
#include<stdio.h>
int main()
{
    int lower, upper, i, j, count;
    printf("Enter lower limit : ");
    scanf("%d", &lower);
    printf("Enter upper limit : ");
    scanf("%d", &upper);
    for(i = lower; i <= upper; i++){
        if(i <= 1)
            continue;
            count = 0;
        for(j = 2; j < i; j++){
        if(i % j == 0){
            count++;
        }
    }
    if(count == 0){
        printf("Prime number : %d\n", i);
    }
}
    return 0;
}