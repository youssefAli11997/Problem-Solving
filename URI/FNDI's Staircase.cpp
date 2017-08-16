// problem link : https://www.urionlinejudge.com.br/judge/en/problems/view/2518
// gategory : Geometry
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h,c,l;
    while(cin>>n>>h>>c>>l){
        printf("%.4f\n", (n * 1.0 * sqrt(c*c + h*h) * l) / 10000.0);
    }
    return 0;
}
