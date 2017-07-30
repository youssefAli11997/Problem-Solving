// problem link : https://www.hackerrank.com/challenges/the-power-sum

#include <bits/stdc++.h>
using namespace std;
int x, n;
int power(int num, int pow){
    if(pow == 0) return 1;
    if(pow & 1)
        return num * power(num * num, (pow - 1) / 2);
    return power(num * num, pow / 2);
}

int recur(int tar, int num){
    int val = tar - power(num, n);
    if(val < 0) return 0;
    if(val == 0) return 1;
    return recur(tar - power(num, n), num + 1) + recur(tar, num + 1);
}

int main() {
    cin>>x>>n;
    cout<<recur(x, 1)<<endl;
    return 0;
}
