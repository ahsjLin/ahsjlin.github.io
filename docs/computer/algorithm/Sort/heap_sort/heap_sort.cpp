#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void swap(int *p1, int *p2){
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void MaxHeapify(int *arr, int ind_root, int len_array){
	int ind_largest;
	int ind_left = 2*ind_root;
	int ind_right = 2*ind_root+1;

	ind_largest = ind_root;
	if(ind_left<len_array && arr[ind_root]>arr[ind_left]) 
		ind_largest = ind_left;
	if(ind_right<len_array && arr[ind_largest]>arr[ind_right])
		ind_largest = ind_right;
	if(ind_largest != ind_root){
		swap(arr+ind_largest, arr+ind_root);
		MaxHeapify(arr,ind_largest,len_array);
	}

}

void BuildMaxHeap(int *arr,int n){
	for(int i=n/2;i>=1;i--){
		MaxHeapify(arr, i, n);
	}
}

void PrintMaxHeap(int *arr, int n){
	std::cout << "start heap sort" << std::endl;
	for(int i=1;i<n;i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void HeapSort(int *arr, int n){
	BuildMaxHeap(arr, n);
	int size = n;
	for(int i=n-1;i>1;i--){
		swap(arr+i, arr+1);
		MaxHeapify(arr, 1, --size);
	}

}

int main()
{
	int n = 10000;
	// create random squence
	int arr[n];
	arr[0] = 999999;
	srand(time(NULL));
	for(int i=1;i<n; i++){
		arr[i] = rand()%10;
	}

	/* print squence */
	/*  
	std::cout << "original squence:" << std::endl;
	for(int i: arr){
		std::cout << i << " ";
	}
	std::cout << std::endl;
	*/


	clock_t t1 = clock();
	HeapSort(arr,n);
	clock_t t2 = clock();

	// print sorted
	//PrintMaxHeap(arr, n);

	std::cout << ((double)(t2-t1))/CLOCKS_PER_SEC << "s."<< std::endl;

	
	return 0;
} 
