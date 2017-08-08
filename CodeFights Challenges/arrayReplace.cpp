// problem link : https://codefights.com/arcade/intro/level-6/mCkmbxdMsMTjBc3Bm/

vector<int> arrayReplace(vector<int> inputArray, int elemToReplace, int substitutionElem){
    for(int i=0; i<inputArray.size(); i++) if(inputArray[i] == elemToReplace){
        inputArray[i] = substitutionElem;
    }
    return inputArray;
}
