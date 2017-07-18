/*
 - A test-your-understanding problem
 - tutorial link : https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-in-the-real-estate/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/
#include <iostream>
using namespace std;

int n, m, x, y, q;
bool g[10001][1001];

int main() {
    cin>>n>>m;
    while(m--) {
        cin>>x>>y;
        g[x][y] = 1;
        g[y][x] = 1;
    }
    cin>>q;
    while(q--) {
        cin>>x>>y;
        cout<<(g[x][y] ? "YES\n":"NO\n");
    }
    return 0;
}
