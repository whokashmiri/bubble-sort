#include<stdio.h>
void insertionSort(int arr[], int size){
    for(int i =1; i<size; i++){
        int key = arr[i];
        int j = i-1;
        while (j>0 && arr[j]>key)
        {
            arr[j+1] =  arr[j];
            j--;
        }
        arr[j+1] = key;
        
    }

}
void printArray(int arr[], int size){
for(int i=0; i<size;i++){
    printf("%d ",arr[i]);
}
printf("\n ");
}
int main(){
    int data[] = {9,8,5,4,1,2};
    int size = sizeof(data)/sizeof(data[0]);
    printf("Sorted Array");
    printArray(data,size);

}