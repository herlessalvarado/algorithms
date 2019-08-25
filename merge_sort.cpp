#include<iostream>

void merge(int arr[], int p, int q, int r){
	int i,j,k;
	int n1 = q-p+1;
	int n2 = r-q;
	int L[n1], R[n2];
	for(i=0; i<n1; i++){
		L[i] = arr[p+i];
	}
	for(j=0; j<n2; j++){
		R[j] = arr[q+1+j];
	}
	i=0;j=0;k=p;
	while(i<n1 && j<n2){
		if(L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		}else{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k] = L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int arr[], int p, int r){
	if(p<r){
		int q = (p+r)/2;
		merge_sort(arr,p,q);
		merge_sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}

int main(){
	int a[] = {23,50,12,56,34,90};
	int a_size = sizeof(a)/sizeof(a[0]);

	merge_sort(a,0,a_size-1);

	for (int i=0; i<a_size; i++)
	{
		std::cout << a[i] << " ";
	}

	return 0;
}