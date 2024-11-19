#include<stdio.h>
int bubbleSort(int arr[], int n){
    int i , j , temp;
    int flag;
    for(int i = 0; i < n-1; i++){
        flag = 0;
        for(int j = 0; j < n - 1 -i; j++){
            if (arr[j]> arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
            
        }
        if(flag == 0){
            break;
        }
    }
}

void printArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    }
    printf("\n ");
    
}
int main(){
    int arr[] = {5,9,6,2,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
        printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;



}