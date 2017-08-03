/*
 - a test-your-understanding problem
 - tutorial link : https://www.hackerearth.com/practice/math/number-theory/totient-function/tutorial/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans; cin>>n; ans = n;
    for(int i=2; i*i<=n && n > 1; i++){
        //cout<<i<<endl;
        if(n % i == 0)
            ans = (ans / i) * (i - 1);
        while(n % i == 0)
            n /= i;
    }
    if(n > 1)
        ans = (ans / n) * (n - 1);
    cout<<ans<<endl;
    return 0;
}
