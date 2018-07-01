/*
 - problem link : https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>

using namespace std;

int counter;

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * insert(struct node * root, int data){
    if(!root){
        root = (struct node *)(malloc(sizeof(struct node *)));
        root->data = data;
        counter++;
        return root;
    }
    if(root->data < data){
        root->right = insert(root->right, data);
    }
    if(root->data > data){
        root->left = insert(root->left, data);
    }
    return root;
}

int main() {
	int t; cin>>t;
	while(t--){
	    counter = 0;
	    int n,x; cin>>n>>x;
	    struct node * root = NULL;
	    for(int i=0; i<n; i++){
	        int d; cin>>d;
	        root = insert(root, d);
	    }
	    if(counter == x){
	        cout<<"Good\n";
	    }
	    if(counter > x){
	        cout<<"Average\n";
	    }
	    if(counter < x){
	        cout<<"Bad\n";
	    }
	}
	return 0;
}
