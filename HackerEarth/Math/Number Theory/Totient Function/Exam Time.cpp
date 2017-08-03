/*
 - problem link : https://www.hackerearth.com/practice/math/number-theory/totient-function/practice-problems/algorithm/exam-time-2/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <iostream>
using namespace std;

int main(){
    int t,n,ans; cin>>t;
    while(t--){
        cin>>n; ans = n;
        for(int i=2; i*i<=n && n > 1; i++){
            if(n % i == 0) ans = (ans / i) * (i - 1);
            while(n % i == 0) n /= i;
        }
        if(n > 1)
            ans = (ans / n) * (n - 1);
        cout<<ans<<endl;
    }
    return 0;
}
