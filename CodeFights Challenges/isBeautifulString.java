boolean isBeautifulString(String s) {
    int[] freq = new int[26];
    for(int i=0; i<s.length(); i++)
        freq[s.charAt(i)-'a']++;
    
    for(int i=1; i<26; i++)
        if(freq[i] > freq[i-1])
            return false; 
    return true;
}
