/*
 - a test-your-inderstanding problem
 - tutorial link : https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/tutorial/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* left = NULL; 
    struct node* right = NULL;
};

struct node * insert(struct node * root, int data){
    if(!root){
        root = (struct node *)(malloc(sizeof(struct node*)));
        root->data = data;
        return root;
    }
    
    if(root->data > data){ // go left
        root->left = insert(root->left, data);
    }
    else if(root->data <= data){ // go left
        root->right = insert(root->right, data);
    }
    return root;
}

struct node * find(struct node * root, int data){
    if(root == NULL){
        return NULL;
    }
    if(root->data > data){
        find(root->left, data);
    }
    else if(root->data < data){
        find(root->right, data);
    }
    else{
        return root;
    }
}

void preorder(struct node * root){
    if(root != NULL){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    struct node * root;
    int n; cin>>n;
    for(int i=0; i<n; i++){
        int x; cin>>x;
        root = insert(root, x);
    }
    int q; cin>>q;
    preorder(find(root, q));
    return 0;
}
