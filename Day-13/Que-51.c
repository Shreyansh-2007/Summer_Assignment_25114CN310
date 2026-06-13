//Write a program to Find largest element and smallest element
#include<stdio.h>
int main(){
    int n, arr[100], largest , smallest, i;
    printf("Enter number of element : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > largest)
        largest = arr[i];
        if (arr[i] < smallest)
        smallest = arr[i];       
    }
    printf("Largest element of an array : %d\n", largest);
    printf("Smallest element of an array : %d", smallest);
    return 0;
}