#include "TreeNode.hpp"

#include <vector>

class PostorderTraversal
{
  public:
    static void traverse(const TreeNode *root, std::vector<int> &postorderTraversal);

  private:
    static void dfs(const TreeNode *root, std::vector<int> &postorderTraversal);
};