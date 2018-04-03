//link: https://codefights.com/arcade/intro/level-7/PTWhv2oWqd6p4AHB9/
int hammingDist(string a, string b){
    int hamming = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            hamming++;
    }
    return hamming;
}

bool check(vector<string> arr){
    for(int i=1; i<arr.size(); i++){
        if(hammingDist(arr[i-1], arr[i]) != 1){
            return false;
        }
    }
    return true;
}

bool stringsRearrangement(vector<string> inputArray) {
    sort(inputArray.begin(), inputArray.end());
    do{
        if(check(inputArray))
            return true;
    }while(next_permutation(inputArray.begin(), inputArray.end()));
    return false;
}
