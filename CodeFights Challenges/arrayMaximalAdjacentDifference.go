// problem link : https://codefights.com/arcade/intro/level-5/EEJxjQ7oo7C5wAGjE/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

func arrayMaximalAdjacentDifference(inputArray []int) int {
    max := -1;
    for i := 0; i < len(inputArray) - 1; i++ {
        if abs(inputArray[i] - inputArray[i+1]) > max {
            max = abs(inputArray[i] - inputArray[i+1]);
        }
    }
    return max;
}

func abs(x int) int {
    if x < 0 {
        return -x;
    }
    return x;
}
