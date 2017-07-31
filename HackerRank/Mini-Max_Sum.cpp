// problem link : https://www.hackerrank.com/challenges/mini-max-sum/

#include <bits/stdc++.h>
using namespace std;
vector<int> arr(5);
vector<long long> sums;

void solve(long long sum, int idx, int cnt){
    if(cnt == 4){
        sums.push_back(sum);
        return;
    }
    if(idx == 5) return;
    solve(sum + arr[idx], idx + 1, cnt + 1); // take it
    solve(sum, idx + 1, cnt); // leave it
}

int main() {
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    solve(0, 0, 0);
    sort(sums.begin(), sums.end());
    cout<<sums[0]<<" "<<sums[sums.size() - 1]<<endl;
    return 0;
}
