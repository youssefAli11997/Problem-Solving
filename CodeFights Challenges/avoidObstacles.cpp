
// problem link : https://codefights.com/arcade/intro/level-5/XC9Q2DhRRKQrfLhb5/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

int avoidObstacles(std::vector<int> inputArray) {
    for(int i=1; i<=42; i++){
        bool f = true;
        for(int j=0; j<inputArray.size(); j++) if(inputArray[j] % i == 0)
            f = false;
        if(f)
            return i;
    }
}
