/*
 - problem link : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/can-you-guess/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <iostream>
using namespace std;

int main() {
    int q; cin>>q;
    while(q--) {
        int val, ans = 0; cin>>val;
        for(int i=1; i<val; i++) if(val % i == 0) ans += i;
        cout<<ans<<endl;
    }
    return 0;
}
