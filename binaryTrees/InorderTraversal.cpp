#include "InorderTraversal.hpp"

void InorderTraversal::traverse(const TreeNode *root, std::vector<int> &inorderTraversal)
{
    dfs(root, inorderTraversal);
}

void InorderTraversal::dfs(const TreeNode *root, std::vector<int> &inorderTraversal)
{
    if (root == nullptr)
    {
        return;
    }
    dfs(root->left, inorderTraversal);
    inorderTraversal.push_back(root->value);
    dfs(root->right, inorderTraversal);
}