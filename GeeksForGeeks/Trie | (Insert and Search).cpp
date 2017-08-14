// problem link : http://practice.geeksforgeeks.org/problems/trie-insert-and-search/0
// basic trie problem
#include <bits/stdc++.h>
using namespace std;

typedef struct node node;

struct node {
  node * children[26];
  bool isLeaf;
};

node * createNode(){
    node * newNode = (node *) (malloc(sizeof(node)));
    newNode -> isLeaf = false;
    for(int i=0; i<26; i++)
        newNode -> children[i] = NULL;
    
    return newNode;
}

void insert(node * root, string key){
    node * curr = root;
    for(int i=0; i<key.size(); i++){
        int idx = key[i] - 'a';
        if(curr -> children[idx] == NULL)
            curr -> children[idx] = createNode();
        curr = curr -> children[idx];
    }
    curr -> isLeaf = true;
}

bool search(node * root, string key){
    node * curr = root;
    for(int i=0; i<key.size(); i++){
        int idx = key[i] - 'a';
        if(curr -> children[idx] == NULL)
            return false;
        curr = curr -> children[idx];
    }
    return (curr != NULL) && (curr -> isLeaf);
}

int main() {
	int t; cin>>t;
	for(int i=0; i<t; i++){
	    int n; cin>>n;
	    node * root = createNode();
	    string key;
	    for(int i=0; i<n; i++){
	        cin>>key;
	        insert(root, key);
	    }
	    cin>>key;
	    cout<<search(root, key)<<endl;
	}
	return 0;
}
