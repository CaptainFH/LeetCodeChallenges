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
 //Maybe ya can wait with the values? don't know try tomorrow
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& listsO) {
        if(listsO.size() == 0){
            return nullptr;
        }
        vector<ListNode*> lists = listsO;
        bool doneIterating = false;
        ListNode tempHead = ListNode(0);
        ListNode* head = &tempHead;
        ListNode* pointerToHead = &tempHead;
        int currentValue;
        int currentLowest;
        int countNulls = 0;
        bool settingLowest = true;
        while(!doneIterating){
            for(int i = 0; i < lists.size(); i++){
                if (!settingLowest){
                    if((lists.at(i) != nullptr) && lists.at(i)->val <= currentValue){
                        currentLowest = i;
                        currentValue = lists.at(i)->val; 
                    } 
                }
                if (lists.at(i) == nullptr){
                    countNulls++;
                    //std::cout<< "Null Found, number: " << countNulls << std::endl;
                }else if(settingLowest){
                    currentLowest = i;
                    currentValue = lists.at(i)->val; 
                    settingLowest = false;
                }
                if (countNulls == (lists.size()) ){
                     //std::cout << "Terminating" << std::endl;
                    doneIterating = true;
                }
            }
            if (doneIterating){
                //std::cout<< "breaking out of list" << std::endl;
                break;
            }
            countNulls = 0;
            settingLowest = true;
            head->next = lists.at(currentLowest);
            head = lists.at(currentLowest); 
            lists.at(currentLowest) = lists.at(currentLowest)->next;
        }
        /* Testing the pointers 
        while(pointerToHead != nullptr){
            std::cout<< pointerToHead->val << std::endl;
            pointerToHead = pointerToHead->next;
        }
        */
        //std::cout << "left?" << std::endl;
        //std::cout << "Returning head with val " << pointerToHead->next->val << std::endl;
        return pointerToHead->next;
    }
};
