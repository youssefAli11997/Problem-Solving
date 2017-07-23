/*
 - A test-your-understanding problem
 - tutorial link : https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/tutorial/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <iostream>
using namespace std;

int t, n, cache[100005];

int fact(int x){
    if(x <= 1)
        return 1;
    if(cache[x] != 0)
        return cache[x];
    return cache[x] = x * 1LL * fact(x - 1) % 1000000007;
}

int main(){
    cin>>t;
    while(t--){
        cin>>n;
        cout<<fact(n)<<endl;
    }
    return 0;
}
