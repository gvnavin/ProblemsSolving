

vector<int> preorder(TreeNode * root) {
	vecotr<int> ans;
	if(!root) return ans;
	stack<TreeNode *> stk;
	st.push_back(NULL);
	while(root) {
		ans.push_back(root->val);
		if(root->right) stk.push_back(root->right);
		if(root->left) root = root->left;
		else  { root = stk.top() ; stk.pop(); }
	}
}