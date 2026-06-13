//Write a program to Count even and odd elements
#include<stdio.h>
int main(){
    int n, arr[100], i, even = 0, odd = 0;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even++;
        } else {
            odd++;
        } 
    }
    printf("Number of even elements are %d\n", even);
    printf("Number of odd elements are %d", odd);
    return 0;
}