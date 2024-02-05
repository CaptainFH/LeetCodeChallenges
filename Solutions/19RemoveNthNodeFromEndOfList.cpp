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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head-> next == nullptr && n > 0){
            return nullptr;
        }
        ListNode temp(0,head);
        ListNode* tempPointer = &temp;
        int solve = remove(head, tempPointer, n);
        std::cout << temp.next->val << std::endl;
        return temp.next;
    }
    int remove(ListNode* nodeBeenRead, ListNode* parent , int toBeRemoved){
         int removing = toBeRemoved;
        if (nodeBeenRead != nullptr){
            removing = remove(nodeBeenRead->next, nodeBeenRead ,toBeRemoved);
            if(removing == 0){
                std::cout << removing << std::endl;
                parent->next = nodeBeenRead->next;
                return -1;
            }else if ( removing == -1){
                return -1;
            }
        }
        return removing -1;
    }
};
