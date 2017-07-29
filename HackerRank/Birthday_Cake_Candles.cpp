// problem link : https://www.hackerrank.com/challenges/birthday-cake-candles

#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    int mx = ar[0], ret = 0;
    for(int i=0; i<n; i++)if(mx < ar[i])
        mx = ar[i];
    for(int i=0; i<n; i++)if(mx == ar[i])
        ret++;
    return ret;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++)
       cin >> ar[ar_i];
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
