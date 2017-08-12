#include <bits/stdc++.h>
using namespace std;

int mx, n;
char board[7][7];

void solve(int i, int j, int cnt){
    if(i > n) return;
    if(i == n){
        mx = max(cnt, mx);
        return;
    }
    bool rowVal = true, colVal = true;
    // check column
    for(int r=0; r<i; r++){
        if(board[r][j] == '*'){
        	bool tmp = false;
            for(int k=r; k<i; k++) if(board[k][j] == 'X'){
                tmp = true;
                break;
            }
            if(!tmp) colVal = false;
        }
    }
    // check row
    for(int c=0; c<j; c++){
        if(board[i][c] == '*'){
     	    bool tmp = false;
            for(int k=c; k<j; k++) if(board[i][k] == 'X'){
                tmp = true;
                break;
            }
            if(!tmp) rowVal = false;
        }
    }
    if(colVal && rowVal && board[i][j] != 'X'){
        board[i][j] = '*';
        solve(j == n-1 ? i+1 : i, j == n-1 ? 0 : j+1, cnt+1);
        board[i][j] = '.';
    }
        solve(j == n-1 ? i+1 : i, j == n-1 ? 0 : j+1, cnt);
}

int main(){
	//freopen("in.txt","rt",stdin);
	//freopen("out.txt","wt",stdout);
    while(1){
        mx = -1;
        cin>>n;
        if(!n) break;
        for(int i=0; i<n; i++)
            cin>>board[i];
        solve(0,0,0);
        cout<<mx<<endl;
    }
    return 0;
}
