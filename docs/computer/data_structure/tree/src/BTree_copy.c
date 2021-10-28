// definition node
struct BTreeNode{
	struct BTreeNode *leftChild;
	int data;
	struct BTreeNode *rightChild;
};
// root pointer
struct BTreeNode *root;


// function: copy binary tree
struct BTreeNode * copyTree(struct BTreeNode *treeRoot){
	struct BTreeNode *copyRoot;
	if(treeRoot == NULL) return NULL;
	// allocate memory
	copyRoot = (struct BTreeNode *) malloc(sizeof(struct BTreeNode));

	// start copy
	copyRoot -> data = treeRoot -> data;
	copyRoot -> leftChild = copyTree(treeRoot -> leftChild);
	copyRoot -> rightChild = copyTree(treeRoot -> rightChild);
	return copyRoot;
}
