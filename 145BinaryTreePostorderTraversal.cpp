/*
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
*/
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // write your code here
        vector<int> result;
        traversing(root, &result);
        return result;
    }
    void traversing(TreeNode* currentNode, vector<int>* result){
        if(currentNode != nullptr){
        traversing(currentNode->left,result);
        traversing(currentNode->right,result);
        result->push_back(currentNode->val);
        }
    }
};
