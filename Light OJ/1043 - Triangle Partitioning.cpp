// problem link : http://lightoj.com/volume_showproblem.php?problem=1043
// Geometry, Basic Geometry
#include <bits/stdc++.h>
#define PI 2 * acos(0.0)
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        double ab,ac,bc,r,ad; cin>>ab>>ac>>bc>>r;
        ad = ab * sqrt(r / (r + 1));
        printf("Case %d: %lf\n",i,ad);
    }
    return 0;
}
