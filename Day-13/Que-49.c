//Write a program to input and display array
#include<stdio.h>
int main() {
    int n, arr[100];
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements are : \n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}