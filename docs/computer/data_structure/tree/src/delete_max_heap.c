// return the value of the delete one
int deleteMaxValue(){
	int maxValue;
	int nodeIndex = 1;
	int childNodeIndex;
	if(heapNumber==0) prinf("Heap is empty.");
	else{

		maxValue = heap[nodeIndex];

		// global variable
		heapNumber--;

		while(nodeIndex <= heapNumber/2){
			// left Child value is great than right one.
			if(heap[2*nodeIndex] > heap[2*nodeIndex +1]){
				childNodeIndex = 2*nodeIndex;
			}
			else{
				childNodeIndex = 2*nodeIndex +1;
			}
			// assign bigger one to parent.
			heap[nodexIndex] = heap[childNodeIndex];
			// assign node index to child node index.
			nodexIndex = childNodeIndex;
		}
		// now, nodeIndex is the biggest index.
		heap[nodeIndex] = NULL;

		return maxValue;
	}
	return INT_MIN;
}
