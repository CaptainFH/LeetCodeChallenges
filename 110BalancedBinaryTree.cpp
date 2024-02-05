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
    bool isBalanced(TreeNode* root) {
         int result = recursiveBalancer(0, root);
        if (result != -1){
            return true;
        }
        return false;
    }

    
    int recursiveBalancer(int currentDepth, TreeNode* currentNode){
        if (currentNode == nullptr){
            return currentDepth;
        } 
        int leftDepth = recursiveBalancer(currentDepth+1, currentNode->left);
        int rightDepth = recursiveBalancer(currentDepth+1, currentNode->right);
        if ((leftDepth == -1) || (rightDepth == -1)){
            return -1;
        }
        if ((leftDepth-1) <= rightDepth && rightDepth <= (leftDepth+1) ){
            if (leftDepth > rightDepth){
                return leftDepth;
            }
            return rightDepth;
        }
        return -1;
    }
};
/*
        int currentLeftDepth = 0;
        int currentRightDepth = 0;
        if(root == nullptr){
            return true;
        }
        readingDepth(&currentLeftDepth, 0, root->left);
        readingDepth(&currentRightDepth, 0, root->right);
        std::cout << currentLeftDepth << std::endl;
        std::cout << currentRightDepth << std::endl;
        if((currentLeftDepth-1) <= currentRightDepth && currentRightDepth <= (currentLeftDepth+1)){
            return true;
        }
        return false;
    }
    void readingDepth(int* maxDepth,int currentDepth, TreeNode *currentRoot){
        if(currentRoot != nullptr){
            currentDepth++; 
            if (*maxDepth < currentDepth){
                *maxDepth = currentDepth;
            }
            readingDepth(maxDepth, currentDepth, currentRoot-> left);
            readingDepth(maxDepth, currentDepth, currentRoot->right);
        }
    }
*/
