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
import java.math.BigInteger;
class Solution {
public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        String firstNumber = "";
        String secondNumber = "";
        while (l1 != null || l2 != null){
            if (l1 != null){
                firstNumber =  l1.val + firstNumber;
                l1 = l1.next;
            }
            if (l2 != null){
                secondNumber = l2.val + secondNumber;
                l2 = l2.next;
            }
        }
        //System.out.println(firstNumber);
        //System.out.println(secondNumber);
        BigInteger resultBI = new BigInteger(firstNumber);
        resultBI = resultBI.add(new BigInteger(secondNumber));
        System.out.println(resultBI);
        String resultS = resultBI.toString();
        ListNode result = new ListNode();
        for(int i = 0; i < resultS.length(); i++){
            result.val = Character.getNumericValue(resultS.charAt(i));
            result = new ListNode(0, result); 
        }
        return result.next;
    }
}
    
    
           /*     int temp;
            if (index1 >= 0 && index2 >= 0){
                temp = Character.getNumericValue(firstNumber.charAt(index1)) + Character.getNumericValue(secondNumber.charAt(index2));
                index1--;
                index2--;
            }else{
                if(index1 < 0){
                    temp = Character.getNumericValue(secondNumber.charAt(index2));
                    index2--;
                }else{
                    temp = Character.getNumericValue(firstNumber.charAt(index1));
                    index1--;
                }
            }
            if (addOne){
                temp++;
                addOne = false;
            }
            if (temp >= 10){
                temp = temp - 10;
                addOne = true;
            }
            System.out.println(temp);
           result.val = temp;
            ListNode tempo = result;
            result = new ListNode();
            result.next = tempo;
        }
       */
