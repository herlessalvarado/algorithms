#include<iostream>

void insertion_sort(int arr[], int n){
	for(int i=1; i<n; i++){
		int key = arr[i];
		int j=i-1;
		while (j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1] = key;
	}
}

int main(){
	int a[] = {5,4,3,2,1};
	int size = sizeof(a) / sizeof(a[0]);

	insertion_sort(a,size);

	for(int i=0; i<size; i++){
		std::cout << a[i] << " ";
	}

	return 0;
}
