#include <bits/stdc++.h>
using namespace std;

int main(){
    //freopen("in.txt","rt",stdin);
    //freopen("out.txt","wt",stdout);
    int t,x,y,z; cin>>t;
    while(t--){
        cin>>x>>y>>z; x *= 60; y *= 60;
        double f = (x+y)/3.0;
        double xf = (x - f);
        double yf = (y - f);
        cout<< floor( xf * z / (xf + yf) ) <<endl;
    }
    return 0;
}
