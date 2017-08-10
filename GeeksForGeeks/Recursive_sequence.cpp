// problem link : http://practice.geeksforgeeks.org/problems/recursive-sequence/0
#include <bits/stdc++.h>
using namespace std;

int num;

long long F(int n, int x, int cnt) {
    if(n == num + 1)
        return 0;
    long long val = 1;
    int i = 0;
    for(; i<cnt; i++) {
        val *= x + i;
    }
    return val + F(n + 1, x + i, cnt + 1);
}

int main() {
	int t; cin>>t;
	while(t--) {
	    cin>>num;
	    cout<<F(1, 1, 1)<<endl;
	}
	return 0;
}
