

vector<int> postOrder(TreeNode * root) {
	vector<int> ans;
	if(!root) return ans;
	stack<TreeNode *> stk;
	stk.push_pack(NULL);
	while(root) {
		if(root->left) {
			stk.push(root);
			root = root->left;
		}else if(root->right) {
			stk.push(root);
			root = root->right;
		} else {
			ans.push_back(root->val);
			TreeNode * ptr = stk.top();
			stk.pop();
			while(ptr && (ptr->right == NULL || ptr->right == root)) {
				ans.push_back(ptr->val);
				root = ptr;
				ptr=  stk.top();
				stk.pop();
			}
			
			if(ptr) {
				stk.push_back(ptr);
				root = ptr->right;
			}
		}
	}
	return ans;
}