// week14-3.cpp binary tree第一題
//leetcode 104 maxium depth of binary tree第一題
class Solution{
public:
	int maxDepth(TreeNode* root){
		if(root == nullptr) return 0;
		int ans1 = maxDepth(root -> left);
		int ans2 = maxDepth(root -> right);
		return max(ans1, nas2)+1;
	}
}