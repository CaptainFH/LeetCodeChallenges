/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        // write your code here
        countDiameter(root);
        
        return highestCross(root, 0);
    }
    int countDiameter(TreeNode* root){
        int leftDepth;
        int rightDept;
        root->left != nullptr ? leftDepth = countDiameter(root->left) : leftDepth = 0;
        root->right !=  nullptr ? rightDept = countDiameter(root->right) : rightDept = 0;
        leftDepth < rightDept ? root->val = rightDept: root->val = leftDepth;
        root->val++;
        //std::cout << root->val << std::endl;
        return root->val;
    }
    int highestCross(TreeNode* root, int currentHighest){
        int thisPath;
        int leftPath;
        int rightPath;
        if(root->left != nullptr && root->right != nullptr){
            //::cout << root->left->val << root->right->val << std::endl;
        thisPath = root->left->val + root->right->val;
        leftPath = highestCross(root->left, currentHighest);
        rightPath = highestCross(root->right , currentHighest);
        }else if (root->right != nullptr){
            thisPath = root->right->val;
            leftPath = 0;
            rightPath = highestCross(root->right, currentHighest);
        } else if(root->left != nullptr){
            thisPath = root->left->val;
            rightPath = 0;
            leftPath = highestCross(root->left, currentHighest);
        }else{
            thisPath = 0;
            rightPath = 0;
            leftPath = 0;
        }
        thisPath > currentHighest ? currentHighest = thisPath : currentHighest = currentHighest;
        leftPath > currentHighest ? currentHighest = leftPath : currentHighest = currentHighest;
        rightPath > currentHighest ? currentHighest = rightPath : currentHighest = currentHighest;
        return currentHighest;
    }
};
