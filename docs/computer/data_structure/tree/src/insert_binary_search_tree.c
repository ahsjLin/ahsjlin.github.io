struct BTreeNode{
	struct BTreeNode *leftChild;
	int data;
	struct BTreeNode *rightChild;
};
struct BTreeNode *root;

/*
 * return 1 -> insert successfully.
 * return 0 -> insert unsuccessfully.
 *
 */
bool insertBTNode(int insertedValue){
	struct BTreeNode *child, *parent;
	child = root;
	parent = NULL;

	// to check dulplicate value
	while(child != NULL){
		parent = child;
		// unsuccessfully.
		if(insertValue==child->data) return 0; 
		if(insertValue < child->data){
			child = child->leftChild;
		}
		else{
			child = child->rightChild;
		}
	}
	/*
	 * parent node is assigned from leaf node.
	 * continue if no dulplicate
	 * allocate memory.
	 * reset child pointer 
	 */
	child = (struct BTreeNode*)malloc(struct BTreeNode);
	child->data = insertedValue;

	if(root==NULL) root = child;
	else if (insertedValue < parent->data)
		parent->leftChild = child;
	else
		parent->rightChild = child;

	 // successfully.
	return 1;
}
