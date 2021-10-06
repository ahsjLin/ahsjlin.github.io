#include <iostream>
#include <stdlib.h> // for random
#include <time.h> // for getting current time
#include <vector> 

// the number of executions
int counter=0;

void swap(int *i, int *j){
	int temp;
	temp = *i;
	*i =*j;
	*j = temp;
}

void insertionSort(std::vector<int> &v){
	int j, temp;
	for(int i=0; i<v.size(); i++){
		temp = v[i];
		for(j=i;j>0 && v[j]>v[j-1];j--){
			swap(&(v[j]),&v[j-1]);
		}
		v[j] = temp;
	}
}

int main(){
	std::vector<int> ori;
	srand(time(NULL));
	for(int i=0; i<10; i++){
		//ori.push_back(rand()%10);
		ori.push_back(i);
	}
	// vec check
	for(int i:ori) std::cout << i << std::endl;
	
	
	// insertion sort
	insertionSort(ori);


	// after sorted
	std::cout << "<- After Insertion Sort ->" << std::endl;
	for(int i:ori) std::cout << i << std::endl;
	std::cout << "Counter:" <<counter<< std::endl;
	
	return 0;
}
