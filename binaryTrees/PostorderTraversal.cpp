#include "PostorderTraversal.hpp"

void PostorderTraversal::traverse(const TreeNode *root, std::vector<int> &postorderTraversal)
{
    dfs(root, postorderTraversal);
}

void PostorderTraversal::dfs(const TreeNode *root, std::vector<int> &postorderTraversal)
{
    if (root == nullptr)
    {
        return;
    }
    dfs(root->left, postorderTraversal);
    dfs(root->right, postorderTraversal);
    postorderTraversal.push_back(root->value);
}