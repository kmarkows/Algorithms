#include "LevelorderTraversal.hpp"

#include <queue>

void LevelorderTraversal::traverse(TreeNode *root, std::vector<int> &levelorderTraversal)
{
    std::queue<TreeNode *> nodes;
    nodes.push(root);
    while (not nodes.empty())
    {
        TreeNode *currNode = nodes.front();
        nodes.pop();
        levelorderTraversal.push_back(currNode->value);
        if (currNode->left)
        {
            nodes.push(currNode->left);
        }

        if (currNode->right)
        {
            nodes.push(currNode->right);
        }
    }
}