// A test-your-understanding problem
// tutorial link : https://www.hackerearth.com/practice/data-structures/advanced-data-structures/trie-keyword-tree/tutorial/
#include <iostream>
using namespace std;

typedef struct node node;

struct node{
    node * children[26];
    int w;
};

node * createNode(){
    node * tn = (node *) (malloc(sizeof(node)));
    tn -> w = -1;
    for(int i=0; i<26; i++)
        tn -> children[i] = NULL;
    return tn;
}

void insert(node * root, string key, int weight){
    node * curr = root;
    for(int i=0; i<key.size(); i++){
        int idx = key[i] - 'a';
        if(curr -> children[idx] == NULL)
            curr -> children[idx] = createNode();
        curr = curr -> children[idx];
        curr -> w = max(curr -> w, weight);
    }
}

int search(node * root, string key){
    node * curr = root;
    for(int i=0; i<key.size(); i++){
        int idx = key[i] - 'a';
        if(curr -> children[idx] == NULL)
            return -1;
        curr = curr -> children[idx];
    }
    if(curr != NULL)
        return curr -> w;
}

int main(){
    int n,q; cin>>n>>q;
    node * trie = createNode();
    for(int i=0; i<n; i++){
        string k;  int w; cin>>k>>w;
        insert(trie, k, w);
    }
    for(int i=0; i<q; i++){
        string k; cin>>k;
        cout<<search(trie, k)<<endl;
    }
    return 0;
}
