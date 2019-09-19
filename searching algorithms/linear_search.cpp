#include<iostream>

int linear_search(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }    
    }
    return -1;   
}

int main(){
    int a[] = {5,34,54,89,21,34,67,45,23,73};
    int size_a = sizeof(a)/sizeof(a[0]);
    int ans = linear_search(a,size_a,73);
    std::cout << ans << "\n";
    return 0;
}