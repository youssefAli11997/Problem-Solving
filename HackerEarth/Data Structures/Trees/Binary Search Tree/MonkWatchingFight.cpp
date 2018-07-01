/*
 - problem link : https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/monk-watching-fight/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>

using namespace std;

int maxH = 0;

struct node{
  int data;
  struct node * left = NULL;
  struct node * right = NULL;
};

struct node * insert(struct node * root, int data){
    if(root == NULL){
        root = (struct node *)(malloc(sizeof(struct node *)));
        root->data = data;
        return root;
    }
    if(root->data < data){
        root->right = insert(root->right, data);
    }
    else if(root->data >= data) {
        root->left = insert(root->left, data);
    }
    return root;
}

void dfs(struct node * root, int h){
    if(root == NULL){
        maxH = max(h, maxH);
        return;
    }
    dfs(root->left, h+1);
    dfs(root->right, h+1);
}

int main() {
    struct node * root = NULL;
	int n; cin>>n;
	for(int i=0; i<n; i++){
	    int x; cin>>x;
	    root = insert(root, x);
	}
	dfs(root, 0);
	cout<<maxH<<endl;
	return 0;
}
