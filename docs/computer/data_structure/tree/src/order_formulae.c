struct BTreeNode{
	struct BTreeNode *leftChild;
	int data;
	struct BTreeNode *rightChild;
};

struct BTreeNode *root;

// LVR
void printInorder(struct BTreeNode *node){
	if(node != NULL){
		printInorder(node->leftChild);
		printf("%d ",node->data);
		printInorder(node->rightChild);
	}
}

// LRV
void printPostorder(struct BTreeNode *node){
	if(node != NULL){
		printInorder(node->leftChild);
		printInorder(node->rightChild);
		printf("%d ",node->data);
	}
}

// VLR
void printPreorder(struct BTreeNode *node){
	if(node != NULL){
		printf("%d ",node->data);
		printInorder(node->leftChild);
		printInorder(node->rightChild);
	}
}
