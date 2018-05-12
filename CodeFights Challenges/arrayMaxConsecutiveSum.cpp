//link: https://codefights.com/arcade/intro/level-8/Rqvw3daffNE7sT7d5/
//sliding window technique
int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int mx = -1, sum = 0;
    for(int i=0; i<k; i++)
	    sum += inputArray[i];
    mx = max(mx, sum);
    for(int i=k; i<inputArray.size(); i++){
        sum = sum - inputArray[i-k] + inputArray[i];
        mx = max(mx, sum);
    }
    return mx;
}
