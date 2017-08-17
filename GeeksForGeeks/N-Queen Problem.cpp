// link : http://practice.geeksforgeeks.org/problems/n-queen-problem/0
// backtracking
#include <iostream>
using namespace std;

bool r[12],ld[52],rd[52], first;
int n, sol[12];

void solve(int col){
    if(col == n + 1){
        // print solution
        if(!first) cout<<" ";
        first = false;
        cout<<"[";
        for(int i = 1; i <= n; i++) cout<<sol[i]<<" ";
        cout<<"]";
        return;
    }
    
    for(int row = 1; row <= n; row++){
        if(r[row] || ld[row + col] || rd[col - row + n - 1]) continue;
        r[row] = ld[row + col] = rd[col - row + n - 1] = 1;
        sol[col] = row;
        solve(col + 1);
        r[row] = ld[row + col] = rd[col - row + n - 1] = 0;
        sol[col] = 0;
    }
}

int main() {
	int t; cin>>t;
	while(t--){
	    cin>>n;
	    first = true;
	    solve(1);
	    if(first) cout<<"-1";
	    cout<<"\n";
	}
	return 0;
}
