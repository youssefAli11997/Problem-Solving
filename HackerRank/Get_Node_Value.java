/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  class Node {
     int data;
     Node next;
  }
*/

int pos = 0;
int ans_data = -1;
    
int GetNode(Node head,int n) {
     // This is a "method-only" submission. 
     // You only need to complete this method. 
    GetNodeRecursive(head, n);
    return ans_data;
}

void GetNodeRecursive(Node head, int n){
    if(head.next != null)
        GetNodeRecursive(head.next, n);
    if(pos == n){
        ans_data = head.data;
    }
    pos++;
}
