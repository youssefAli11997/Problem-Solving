#include <bits/stdc++.h>
using namespace std;

int n, a[3], cache[4005][3];

int solve(int len, int idx){
    if(len == 0) return 0;
    if(len < 0 || idx > 2)
        return -10000;
    if(cache[len][idx] != -1)
        return cache[len][idx];
    return cache[len][idx] = max(solve(len-a[idx],idx)+1, max(solve(len-a[idx],idx+1)+1, solve(len, idx+1)));
}

int main(){
	cin>>n>>a[0]>>a[1]>>a[2];
	memset(cache, -1, sizeof cache);
	cout<<solve(n, 0);
	return 0;
}
