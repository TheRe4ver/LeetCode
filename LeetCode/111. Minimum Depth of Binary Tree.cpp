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
    int minDepth(TreeNode* root) 
    {
        
        if (root == NULL) 
            return 0;
        
        int_fast64_t leftDepth = minDepth(root->left);
        int_fast64_t rightDepth = minDepth(root->right);

        if (root->left == NULL && root->right == NULL)
            return 1;
        
        if (root->left == NULL)
            return 1 + rightDepth;
       
        if (root->right == NULL)
            return 1 + leftDepth;
       
        return min(leftDepth, rightDepth) + 1;
    }
};

void main()
{
    Solution program;
    TreeNode* tree = new TreeNode();
    program.minDepth(tree);
}