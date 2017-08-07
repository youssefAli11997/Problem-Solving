// problem link : https://www.hackerrank.com/challenges/maximizing-xor/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int mx = 0, l, r; cin>>l>>r;
    for(int i=l; i<=r; i++) for(int j=i+1; j<=r; j++){
        if((i ^ j) > mx) mx = i ^ j;
    }
    cout<<mx<<endl;
    return 0;
}
