#include "../InorderTraversal.cpp"
#include "../LevelorderTraversal.cpp"
#include "../PostorderTraversal.cpp"
#include "../PreorderTraversal.cpp"
#include <gtest/gtest.h>

namespace ut
{

class TestTraversals : public ::testing::Test
{
  protected:
    TreeNode *createBineryTree()
    {
        TreeNode *root = new TreeNode(1);
        root->left = new TreeNode(2);
        root->right = new TreeNode(3);
        root->left->left = new TreeNode(4);
        root->left->right = new TreeNode(5);
        root->right->left = new TreeNode(6);
        root->right->right = new TreeNode(7);
        return root;
    }
};

TEST_F(TestTraversals, TestInorderTraversal)
{
    TreeNode *root = createBineryTree();
    const std::vector<int> expectedInorderTraversal{4, 2, 5, 1, 6, 3, 7};
    std::vector<int> inorderTraversal;
    InorderTraversal::traverse(root, inorderTraversal);
    EXPECT_EQ(expectedInorderTraversal, inorderTraversal);
}

TEST_F(TestTraversals, TestPreorderTraversal)
{
    TreeNode *root = createBineryTree();
    const std::vector<int> expectedPreorderTraversal{1, 2, 4, 5, 3, 6, 7};
    std::vector<int> preorderTraversal;
    PreorderTraversal::traverse(root, preorderTraversal);
    EXPECT_EQ(expectedPreorderTraversal, preorderTraversal);
}

TEST_F(TestTraversals, TestPostorderTraversal)
{
    TreeNode *root = createBineryTree();
    const std::vector<int> expectedPostorderTraversal{4, 5, 2, 6, 7, 3, 1};
    std::vector<int> postorderTraversal;
    PostorderTraversal::traverse(root, postorderTraversal);
    EXPECT_EQ(expectedPostorderTraversal, postorderTraversal);
}

TEST_F(TestTraversals, TestlevelorderTraversal)
{
    TreeNode *root = createBineryTree();
    const std::vector<int> expectedLevelorderTraversal{1, 2, 3, 4, 5, 6, 7};
    std::vector<int> levelorderTraversal;
    LevelorderTraversal::traverse(root, levelorderTraversal);
    EXPECT_EQ(expectedLevelorderTraversal, levelorderTraversal);
}

} // namespace ut