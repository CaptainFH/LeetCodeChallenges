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
    unordered_map<int, int> matchingElements;
    vector<int> findMode(TreeNode* root) {
        std::cout << "is it here?" << std::endl;
        TreeReading(root);
        vector<int> results(1, -1);
        vector<int> resultsVal(1,-1);
        for(auto e: matchingElements){
            std::cout << e.second << std::endl;
            if (e.second > resultsVal.at(0)){
                results.clear();
                resultsVal.clear();
                results.push_back(e.first);
                resultsVal.push_back(e.second);
            }else if(e.second == resultsVal.at(0)){
                results.push_back(e.first);
            }
        }
        return results;
    }

    void TreeReading(TreeNode* root){
        if(root != nullptr){
        if (!matchingElements.contains(root->val)){
            matchingElements[root->val] = 1;

        }else{
        matchingElements[root->val]++;
        }
       //std::cout << "or here?" << std::endl;
        TreeReading(root->left);
        TreeReading(root->right);
        }
    }
};
