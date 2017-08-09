// problem link : https://www.hackerearth.com/practice/algorithms/sorting/counting-sort/practice-problems/algorithm/shil-and-birthday-present/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, sz = 0, freq[(int)1e6+1] = {0}; scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&x);
        freq[x]++;
    }
    for(int i=0; i<=(int)1e6; i++)
        sz += (freq[i] > 0);
    printf("%lld\n", 1LL * sz * (sz - 1) / 2);
    return 0;
}
