//Write a progrma to Write fuction for pallindrome
#include<stdio.h>

void palindrome(void){
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
};
int main() {
    //Function calling
    palindrome();
    return 0;
}