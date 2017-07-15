
bool areSimilar(vector<int> a, vector<int> b) {
    int freqA[1002] = {0};
    int freqB[1002] = {0};
    int diff = 0;
    for(int i=0; i<a.size(); i++) {
        freqA[a[i]]++;
        freqB[b[i]]++;
        diff += (a[i] != b[i]);
    }
    cout<<diff;
    if(diff <= 2) for(int i=0; i<1002; i++) {
        if(freqA[i] != freqB[i])
            return false;
    }
    return (diff <= 2);
}
