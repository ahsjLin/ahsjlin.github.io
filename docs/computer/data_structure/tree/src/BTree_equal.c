struct BTreeNode {
	struct BTreeNode *leftChild;
	int data;
	struct BTreeNode *rightChild;
};
struct BTreeNode *root;

// equal -> return 1
// else -> return 0
bool equalTree(struct BTreeNode *tree1, struct BTreeNode *tree2){

	if(tree1==NULL && tree2==NULL) return 1;

	if(
		tree1 != NULL && 
		tree2 != NULL &&
		tree1->data == tree2->data &&
		equalTree(tree1->leftChild, tree2->leftChild) &&
		equalTree(tree1->rightChild, tree2->rightChild)
	) return 1;

	return 0;
}
