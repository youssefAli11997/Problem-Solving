// problem link : http://lightoj.com/volume_showproblem.php?problem=1022
// Geometry, Basic Geometry
#include <bits/stdc++.h>
#define PI 2 * acos(0.0)
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=1; i<=t; i++){
        double r; cin>>r;
        cout<<"Case "<<i<<": "<<setprecision(2)<<fixed<<r * r * (4 - PI)<<endl;
    }
    return 0;
}
