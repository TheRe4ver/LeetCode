#include <iostream>
#include <vector>

using namespace std;

class Node 
{
public:
    int val;
    vector<Node*> children;

    Node() 
    {
        val = 0;
    }

    Node(int val) 
    {
       this->val = val;
    }

    Node(int val, vector<Node*> children) 
    {
        this->val = val;
        this->children = children;
    }
};

class Solution
{
public:
    static int maxDepth(const Node* root)
    {
        if (!root)
            return 0;
        int max_child = 0;
        for (const Node* child : root->children)
        {
            max_child = max(max_child, maxDepth(child));
        }
        return 1 + max_child;
    }
};

void main()
{
    Solution program;
    Node* tree = new Node();
    program.maxDepth(tree);
}