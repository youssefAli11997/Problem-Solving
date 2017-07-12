public class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode n = new ListNode(0); ListNode tmp = n, p = l1, q = l2;
        int carry = 0, a, b, sum;
        
        while(p!=null || q!=null){
            a = (p==null)? 0 : p.val;
            b = (q==null)? 0 : q.val;
            sum = a + b + carry;
            carry = sum / 10;
            n.next = new ListNode(sum % 10);
            n = n.next;
            if(p!=null) p = p.next;
            if(q!=null) q = q.next;
        }
        
        if(carry == 1)
            n.next = new ListNode(1);
        
        return tmp.next;
    }
}