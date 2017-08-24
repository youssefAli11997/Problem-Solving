// problem link : http://lightoj.com/volume_showproblem.php?problem=1305
// Geometry, Basic Geometry
#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main(){
    int t, area; cin>>t;
    pair<int,int> a, b, c, d, l1, l2;
    for(int i=1; i<=t; i++){
        cin>> a.x>>a.y>> b.x>>b.y>> c.x>>c.y;
        
        d = make_pair(a.x + (c.x - b.x), a.y + (c.y - b.y));
        
        // vector bc
        l1.x = c.x - b.x;
        l1.y = c.y - b.y;
        
        // vector ba
        l2.x = a.x - b.x;
        l2.y = a.y - b.y;
        
        area = abs(l1.x * l2.y - l1.y * l2.x); // abs(cross_prod(l1,l2))
        
        printf("Case %d: %d %d %d\n", i, d.x, d.y, area);
    }
    return 0;
}
