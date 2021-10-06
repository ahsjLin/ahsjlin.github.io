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

void selectionSort(std::vector<int> &v){
	for(int i=0; i<v.size(); i++){

		// for loop(i)
		counter++; 

		// Red: max
		int max=i;

		// assignment
		counter++; 

		// Blue: j
		for(int j=i+1; j<v.size(); j++){
			// for loop(j)
			counter++; 

			// the selection sort just count this line.
			if(v[i]<v[j]){ 
				// refresh max(Red)
				max = j;

				// assignment(max)
				counter++; 
			}
		}
		// last execution of for(j)
		counter++; 
		if(max!=i){
			// Yellow: swap
			swap(&(v[i]), &(v[max]));

			// swap
			counter++; 
		}
	}
	// last execution of for(i)
	counter++; 
}

int main(){
	std::vector<int> ori;
	srand(time(NULL));
	for(int i=0; i<10; i++){
		//ori.push_back(rand()%10);
		// O(n^2)
		ori.push_back(i);
	}
	// vec check
	for(int i:ori) std::cout << i << std::endl;
	
	
	// selection sort
	selectionSort(ori);


	// after sorted
	std::cout << "<- After Selection Sort ->" << std::endl;
	for(int i:ori) std::cout << i << std::endl;
	std::cout << "Counter:" <<counter<< std::endl;
	
	return 0;
}
