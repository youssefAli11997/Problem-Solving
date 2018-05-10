//link: https://codefights.com/arcade/intro/level-8/8N7p3MqzGQg5vFJfZ/
int differentSymbolsNaive(std::string s) {
    bool freq[26] = {0}; int ans=0;
    for(int i=0; i<s.size(); i++){
        freq[s[i]-'a'] = true;
    }
    for(int i=0; i<26; i++){
        ans += freq[i];
    }
    return ans;
}
