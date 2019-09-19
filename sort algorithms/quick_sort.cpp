#include<iostream>

void swap(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;    
}

int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quick_sort(int arr[], int low, int high){
    if(low<high){
        int p = partition(arr,low,high);
        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
    }
}

int main(){
    int a[] = {10, 7, 8, 9, 1, 5};
    int size = sizeof(a)/sizeof(a[0]);
    quick_sort(a,0,size-1);
    for(int i=0; i<size; i++){
        std::cout << a[i] << "\n";
    }
    return 0;
}