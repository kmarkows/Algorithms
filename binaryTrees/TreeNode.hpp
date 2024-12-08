#pragma once

struct TreeNode
{
    TreeNode(int value) : value(value), left(nullptr), right(nullptr)
    {
    }
    int value;
    TreeNode *left;
    TreeNode *right;
};