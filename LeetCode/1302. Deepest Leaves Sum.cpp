#include <iostream>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
	int_fast64_t deepest = 0, sum = 0;
	int_fast64_t deepestLeavesSum(TreeNode* root, int depth = 0)
	{
		if (!root)
			return 0;
		if (!root->left && !root->right)
			if (depth == deepest)
				sum += root->val;
			else if (depth > deepest)
				sum = root->val, deepest = depth;
		deepestLeavesSum(root->left, depth + 1);
		deepestLeavesSum(root->right, depth + 1);
		return sum;
	}
};
void main()
{
	TreeNode tree = TreeNode();
	Solution program;
	cout << "The sum of deapest tree leaves is ->" << program.deepestLeavesSum(&tree);
}