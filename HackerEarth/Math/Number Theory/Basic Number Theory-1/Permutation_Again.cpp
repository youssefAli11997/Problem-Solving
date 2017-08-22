// problem link : https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/permutation-again/
#include <iostream>
using namespace std;

int main(){
    int t,n; cin>>t;
    while(t--){
        cin>>n;
        if(n == 1){
            cout<<"1\n";
            continue;
        }
        cout<<(long long)n*n / 2 - 1<<endl; // (n^2 / 2) - 1
    }
    return 0;
}
