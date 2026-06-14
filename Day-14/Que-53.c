//Write a program to Linear search
#include<stdio.h>
int main() {
    int n, ele, found = 0, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &ele);
    for(i = 0; i < n; i++){
        if(arr[i] == ele){
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Element not found in the array.\n");
    }
    return 0;
}