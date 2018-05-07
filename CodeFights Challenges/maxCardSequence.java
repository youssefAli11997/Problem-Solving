//link: https://codefights.com/challenge/kjXSxYfm4ZfvdzAs4/
int maxCardSequence(int[] cards) {
    Arrays.sort(cards);
    ArrayList<Integer> odd = new ArrayList<>();
    ArrayList<Integer> even = new ArrayList<>();
    ArrayList<Integer> longestSeq = new ArrayList<>();
    for(int i=0; i<cards.length; i++){
        if(cards[i] % 2 == 0)
            even.add(cards[i]);
        else
            odd.add(cards[i]);
    }
    int i=0, j=0;
    if(odd.size() == 0 || even.size() == 0){
        return 1;
    }
    if(odd.get(0) < even.get(0)){
        while(true){
            while(j > 0 && i < odd.size() && odd.get(i) < even.get(j-1))
                i++;
            if(i < odd.size())longestSeq.add(odd.get(i));
            else break;
            while(j < even.size() && even.get(j) < odd.get(i))
                j++;
            if(j < even.size())longestSeq.add(even.get(j));
            else break;
            i++;
            j++;
        }
    }
    else{
        while(true){
            while(j > 0 && i < even.size() && even.get(i) < odd.get(j-1))
                i++;
            if(i < even.size())longestSeq.add(even.get(i));
            else break;
            while(j < odd.size() && odd.get(j) < even.get(i))
                j++;
            if(j < odd.size())longestSeq.add(odd.get(j));
            else break;
            i++;
            j++;
        }
    }
    return longestSeq.size();
}
