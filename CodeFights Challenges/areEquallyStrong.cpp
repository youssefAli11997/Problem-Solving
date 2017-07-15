// problem link : https://codefights.com/arcade/intro/level-5/g6dc9KJyxmFjB98dL/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    return min(yourLeft,yourRight) == min(friendsLeft,friendsRight) &&
           max(yourLeft,yourRight) == max(friendsLeft,friendsRight) ;
}
