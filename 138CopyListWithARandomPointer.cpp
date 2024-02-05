/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
//Finish it later.
//Recursively create all the nodes - and then only match random. //Bcs a hash map wouldn't be able to distinguish nodes with the same value; - Or we can use the addressess as keys? to by pass the value issue? that would do
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }
        Node temp = *head;
        std::cout << temp.val << std::endl;
        string temps;
        unordered_map<string, Node*> copiedList;
        std::ostringstream oss;
        std::ostringstream oss2;
        std::ostringstream oss3;
        oss << head;
        copiedList[oss.str()] = new Node(head->val);
        
        while(temp.next != NULL){
            oss.str("");
            oss.clear();
            oss << temp.next;
            copiedList[oss.str()] = new Node(temp.next->val);
            temp = *temp.next;
        }
        temp = *head;
        //Not synchro
        oss.str("");
        oss.clear();
        oss << head;

        while(temp.next != NULL){
            if (temp.random != NULL){
                oss3 << temp.random;
                copiedList[oss.str()]->random = copiedList[oss3.str()];
                oss3.str("");
                oss3.clear();
            }
            if(temp.next != NULL){
                oss2 << temp.next;
                copiedList[oss.str()]->next = copiedList[oss2.str()];
                oss2.str("");
                oss2.clear();
                oss.str("");
                oss.clear();
                oss << temp.next;
                //temp = *temp.next;
            }
            temp = *temp.next;

        };
        if (temp.random != NULL){
            oss3 << temp.random;
            copiedList[oss.str()]->random = copiedList[oss3.str()];
            oss3.str("");
            oss3.clear();
        }
        std::cout << "ended" << std::endl;
        oss.str("");
        oss.clear();
        oss << head;
        return copiedList[oss.str()];
    }
};

        /*---------------------------------------
        Node example(7);
        example.next = &example;
        example.random = &example;
        //example -> val = 7;
        //example.val = 7;
        //Node *ptrToExample = &example;
        //std::cout << example.val << std::endl;
         Node temp = *head;
        unordered_map<int, Node*> copiedList;
        vector<Node> nodes;
        int i = 0;
        /*
        do{
            Node copiedNode(temp.val);
            nodes.push_back(copiedNode);
            copiedList[temp.val] = &nodes.at(i);
            temp = *temp.next;
            i++;
            //std::cout << temp.val << " "<< copiedNode.val << std::endl;
        }while(temp.next != NULL);
        temp = *head;
        //std::cout<< "does it go throught here? " << std::endl;
        do{
            std::cout<< "loop?" <<  temp.val << std::endl;
            if (temp.next != NULL){
                std::cout<< temp.next->val << std::endl;
            copiedList[temp.val]->next = copiedList[temp.next->val];
            }
            if(temp.random != NULL){
                std::cout<< "second" << std::endl;
            copiedList[temp.val]->random = copiedList[temp.random->val];
            }
        }while(temp.next != NULL);
        Node dumbExample(20);
        Node dumbExample2(10);
        Node* pointerToDumb = &dumbExample;
        dumbExample.next = &dumbExample2; 
        /*
        for(i; i < 20; i++){
            Node attempt3(7);
            nodes.push_back(attempt3);
        }
        for(i=0; i< 20; i++){
            std::cout << nodes.at(i).val << std::endl; 
        }
        
        //std::cout<< "does it create them tho?" << std::endl;
        Node* referenceToHead = &nodes.at(0);*/
        //------------------------------------------*/
                /*
        std::ostringstream oss;
        oss << head;
        string test = oss.str();
        std::cout << test << std::endl;
        oss.str("");
        oss.clear();
        oss << head->next;
        test = oss.str();
        std::cout << test << std::endl;
        */
