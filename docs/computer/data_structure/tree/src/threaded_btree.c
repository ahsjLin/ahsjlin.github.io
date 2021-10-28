/*
 * If leftThreaded / rightThreaded = 0
 * then leftChild / rightChild -> child / son node
 *
 * else if leftThreaded / rightThreaded = 1 
 * 	then leftChild / rightChild -> threaded node
 *
 */
struct BTreeNode {
	bool leftThreaded=0;
	struct BTreeNode *leftChild;

	char data;

	struct BTreeNode *rightChild;
	bool rightThreaded=0;
};
struct BTreeNode *root;


/*
 * return temp -> pointer to threaded node
 */
struct BTreeNode * nextThreadedNode(struct BTreeNode *threadedNode){
	struct BTreeNode *temp;

	temp = threadedNode->rightChild;
	if(threadedNode->rightThreaded) return temp;
	while(!temp->leftThreaded) 
		temp = temp->leftChild;
	return temp;
}
