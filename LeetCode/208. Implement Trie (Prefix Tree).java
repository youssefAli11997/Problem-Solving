class Trie {
    
    class Node {
        Node[] children = new Node[26];
        boolean aWord = false;
    }

    Node root;
    
    /** Initialize your data structure here. */
    public Trie() {
        root = new Node();
    }
    
    /** Inserts a word into the trie. */
    public void insert(String word) {
        Node temp = root;
        for(char c : word.toCharArray()) {
            if(temp.children[c-'a'] == null) {
                temp.children[c-'a'] = new Node();
            }
            
            temp = temp.children[c-'a'];
        }
        
        temp.aWord = true;
    }
    
    /** Returns if the word is in the trie. */
    public boolean search(String word) {
        Node temp = root;
        for(char c : word.toCharArray()) {
            if(temp.children[c-'a'] == null) {
                return false;
            }
            
            temp = temp.children[c-'a'];
        }
        
        return temp.aWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    public boolean startsWith(String prefix) {
        Node temp = root;
        for(char c : prefix.toCharArray()) {
            if(temp.children[c-'a'] == null) {
                return false;
            }
            
            temp = temp.children[c-'a'];
        }
        
        return true;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */
