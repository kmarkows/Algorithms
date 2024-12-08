#include "TreeNode.hpp"

#include <vector>

class InorderTraversal
{
  public:
    static void traverse(const TreeNode *root, std::vector<int> &inorderTraversal);

  private:
    static void dfs(const TreeNode *root, std::vector<int> &inorderTraversal);
};