//Write a program to Frequency of an element
#include<stdio.h>
int main() {
    int n, ele, count = 0, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to find frequency: ");
    scanf("%d", &ele);
    for(i = 0; i < n; i++){
        if(arr[i] == ele){
              count++;
        }
    }
    printf("Frequency of %d is: %d\n", ele, count);    
    return 0;
}