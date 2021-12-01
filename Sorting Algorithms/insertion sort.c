#include<stdio.h>


void insertionSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 1; i < n; i++){
    
        temp = arr[i];
        j = i - 1;
    
        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            
            j = j-1;
        }
        
        arr[j+1] = temp;
    }
}


int main()
{
    int arr[] = {5, 6, 1, 2, 9};
    int n = 5;
    insertionSort(arr, n);
    
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
