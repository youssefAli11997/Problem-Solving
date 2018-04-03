//link: https://codefights.com/arcade/intro/level-8/3AgqcKrxbwFhd3Z3R/
vector<int> extractEachKth(vector<int> inputArray, int k) {
    for(int i=k-1; i<inputArray.size(); i+=k){
        inputArray.erase(inputArray.begin()+i);
        print(inputArray);
        i--;
    }
    return inputArray;
}
