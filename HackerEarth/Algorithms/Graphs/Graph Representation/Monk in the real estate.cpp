/*
 - problem link : https://www.hackerearth.com/practice/algorithms/graphs/graph-representation/practice-problems/algorithm/monk-in-the-real-estate/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int e; cin>>e;
        set<int> g;
        while(e--) {
            int x,y; cin>>x>>y;
            g.insert(x);
            g.insert(y);
        }
        cout<<g.size()<<endl;
    }
    return 0;
}
