struct GLNode{
	bool tag;
	union {
		int data;
		struct GLNode *treeLink;
	} node;
	struct GLNode *nextLink;
}
