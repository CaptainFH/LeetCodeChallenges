/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
    // write your code here
    std::vector<int> listInVector;
    ListNode* headTracker = head;
    while(headTracker != nullptr){
        listInVector.push_back(headTracker->val);
        headTracker = headTracker->next;
        //std::cout << head->val << std::endl;
    }
    int j =  listInVector.size()-1;
    //std::cout << (listInVector.size()/2) << std::endl;
    for(int i = 0; i  < listInVector.size()/2; i++){
        //std::cout << listInVector.at(i) << listInVector.at(j) << std::endl;
        if(listInVector.at(i) != listInVector.at(j)){
        return false;
        }
        j--;
    }
    return true;
    }
    
};
