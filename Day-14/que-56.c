//Write a program to Find duplicates in array
#include<stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Duplicate element are: ");
    int hasDuplicate = 0;
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]) {
               int alreadyPrinted = 0;
            for(k = 0; k < i; k++){
                if(arr[k] == arr[i]){
                alreadyPrinted = 1;
                break;
                }
            }
            if(!alreadyPrinted) {
            printf("%d", arr[i]);
            hasDuplicate = 1;
        }
        break;
        }        
    }
}
if(!hasDuplicate){
    printf("None");
}
printf("\n");      
    return 0;
}