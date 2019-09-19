#include<iostream>

int binary_search(int arr[], int l, int h, int key){
    int mid = (l+h)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if (arr[mid] > key){
        return binary_search(arr,l,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,h,key);
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size_a = sizeof(a)/sizeof(a[0]);
    int ans = binary_search(a,0,size_a-1,1);
    std::cout << ans<< "\n";
    return 0;
}