#include "PreorderTraversal.hpp"

void PreorderTraversal::traverse(const TreeNode *root, std::vector<int> &preorderTraversal)
{
    dfs(root, preorderTraversal);
}

void PreorderTraversal::dfs(const TreeNode *root, std::vector<int> &preorderTraversal)
{
    if (root == nullptr)
    {
        return;
    }
    preorderTraversal.push_back(root->value);
    dfs(root->left, preorderTraversal);
    dfs(root->right, preorderTraversal);
}