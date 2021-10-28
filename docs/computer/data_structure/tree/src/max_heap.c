#define maxsize 100
int heap[maxsize];
int heapNumber=0;
int index;

void insertHeap(int insertValue){
	if(n==maxsize) printf("Heap is full");
	else{
		heapNumber++;
		index=heapNumber;

		while(
			index>1 &&
			insertValue > heap[index/2]
		)
		{
			// small value assign to child node
			heap[index] = heap[index/2];
			// to see parent node
			index /=2;
		}

		heap[index] = insertValue;
	}
}
