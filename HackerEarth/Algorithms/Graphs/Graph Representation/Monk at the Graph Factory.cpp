/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-at-the-graph-factory/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, d; cin>>n;
    for(int i=0; i<n; i++) {
        cin>>d;
        sum += d;
    }
    if(sum / 2 == n-1) cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}
