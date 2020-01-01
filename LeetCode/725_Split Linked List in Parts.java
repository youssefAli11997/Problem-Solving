//link: https://leetcode.com/problems/split-linked-list-in-parts/

class Solution {
    public ListNode[] splitListToParts(ListNode root, int k) {
        int length = 0;
        ListNode[] parts = new ListNode[k];

        // Counting length of the given linkedlist
        ListNode temp = root;
        while(temp != null){
            length++;
            temp = temp.next;
        }

        int partLength;
        int remainder = length % k;
        boolean oneLengthParts = false;

        // Case 1
        // Splitting list into parts of length=1 (with possible empty parts at the end)
        if(length <= k){
            oneLengthParts = true;
            partLength = 1;
        }
        // Case 2
        // Splitting list into parts of length=list_length/k + (1 or 0)
        // (with possible empty parts at the end)
        else{
            partLength = length / k;
        }

        // Loop through the list and split it into k parts
        for(int i=1; i<=k; i++){
            int currentPartLength = partLength;
            // Checking if we should increase the part length by one if we are in case 2
            // We should distribute the remaining (list_length/k remainder)
            // into the first parts (1 item per part)
            if(!oneLengthParts && i<=remainder){
                currentPartLength++;
            }
            // Checking case 1 with no more left items in the original list to put in the current part
            if(oneLengthParts && i>length){
                parts[i-1] = null;
            }
            // Normal operation
            else {
                ListNode currentPartRoot = new ListNode(root.val);
                // Defining temporary variable so wr don't lose current part root reference
                ListNode partTemp = currentPartRoot;
                // Loop with currnetPathLength iterations through the original list
                // starting from its current root reference
                for(int j=0; j<currentPartLength; j++){
                    // If we haven't reached the last item in the current part yet
                    //   define next item
                    // Else
                    //   set it as null
                    partTemp.next = (root.next != null && j<currentPartLength-1? new ListNode(root.next.val) : null);
                    // Move the two pointers
                    partTemp = partTemp.next;
                    root = root.next;
                }
                // Add the current part to the parts array
                parts[i-1] =  currentPartRoot;
            }
        }

        return parts;
    }
