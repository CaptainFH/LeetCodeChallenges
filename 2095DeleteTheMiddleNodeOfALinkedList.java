/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        ListNode temp = head;
        ArrayList<ListNode> list = new ArrayList<>();
        list.add(head);
        while(temp.next != null){
            list.add(temp.next);
            temp = temp.next;
        }
        if(list.size() == 1){
            return null;
        }
        if (list.size() == 2){
            head.next = null;
            return head;
        }
        if(list.size() == 3){
            head.next = head.next.next;
            return head;
        }
        list.get(list.size()/2-2).next.next = list.get(list.size()/2-2).next.next.next;
        
        return head;
    }
}
