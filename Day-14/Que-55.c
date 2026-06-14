//Write a program to Second largest element
#include<stdio.h>
#include<limits.h>
int main() {
    int n, i, largest, secondlargest;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    largest = INT_MIN;
    secondlargest = INT_MIN;
    for(i = 0; i < n; i++){
        if(arr[i] > largest){
            secondlargest = largest;
        largest = arr[i];
        } else if(arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    if(secondlargest == INT_MIN) {
        printf("There is no second largest element,\n");
    } else {
        printf("Second largest element is: %d\n", secondlargest);
    }
    return 0;
}