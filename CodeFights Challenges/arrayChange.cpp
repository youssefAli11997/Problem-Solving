// problem link : https://codefights.com/arcade/intro/level-4/xvkRbxYkdHdHNCKjg/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

int arrayChange(std::vector<int> inputArray) {
    int moves = 0;
    for(int i=1; i<inputArray.size(); i++){
        if(inputArray[i] <= inputArray[i-1]){
            moves += inputArray[i-1] - inputArray[i] + 1;
            inputArray[i] += inputArray[i-1] - inputArray[i] + 1;
        }
    }
    return moves;
}
