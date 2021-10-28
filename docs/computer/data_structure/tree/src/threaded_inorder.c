// continue nextThreadedNode
void threadedInorder(){
	struct BTreeNode *node;
	for(
		node=nextThreadedNode(root);
		node!=root;
		node=nextThreadedNode(node)
	)
		printf("%c", node->data);
}
