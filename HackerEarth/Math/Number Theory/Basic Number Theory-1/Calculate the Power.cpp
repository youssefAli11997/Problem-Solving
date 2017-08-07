/*
 - problem link : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculate-the-power/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAX = 1000000007;

ll modExpo(ll a, ll b){
    if(b == 0) return 1;
    if(b & 1)
        return (a % MAX * modExpo((a * a) % MAX, b / 2) % MAX) % MAX;
    return modExpo((a * a) % MAX, b / 2) % MAX;
}

int main(){
    ll A,B; cin>>A>>B;
    cout<<modExpo(A, B)<<endl;
    return 0;
}
