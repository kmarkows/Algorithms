#include "TreeNode.hpp"

#include <vector>

class PreorderTraversal
{
  public:
    static void traverse(const TreeNode *root, std::vector<int> &preorderTraversal);

  private:
    static void dfs(const TreeNode *root, std::vector<int> &preorderTraversal);
};