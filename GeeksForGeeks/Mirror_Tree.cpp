//link: https://practice.geeksforgeeks.org/problems/mirror-tree/1

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//function Template for C++
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
/* Should convert tree to its mirror */
void mirror(Node* node) 
{
    // Your Code Here
    if(node->left == nullptr && node->right == nullptr)
        return;
    Node* temp = node->left;
    node->left = node->right;
    node->right = temp;
    
    mirror(node->left);
    mirror(node->right);
}
