struct BTreeNode{
	struct BTreeNode *leftChild;
	int data;
	struct BTreeNode *rightChild;
};
struct BTreeNode *root;



/*
 * input: (address of the root, you want to search the value from tree)
 * output: address of the node
 *
 */

/* Recursion version */
struct BTreeNode* searchBST(struct BTreeNode *node,int wantedValue){
	if(node==NULL) return NULL;
	if(wantValue==node->data) return node;
	if(wantValue < node->data)
		return searchBST(node->leftChild, wantedValue);
	return searchBST(node->rightChild, wantedValue);
}

/* Iteration version */
struct BTreeNode* searchBST(struct BTreeNode *node,int wantedValue){
	while(node!=NULL){
		if(wantedValue == node->data) return node;
		if(wantedValue < node->data)
			node = node->leftChild;
		else
			node = node->rightChild;
	}
	return NULL;
}
