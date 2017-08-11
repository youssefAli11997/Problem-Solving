// problem link : https://codefights.com/interview-practice/task/7u7oKqXoFdmh3vGyb/
// well-known backtracking problem
vector<vector<int>> vs;
vector<int> sol;
bool c[30];
bool ld[30];
bool rd[30];
int num;

vector<vector<int>> nQueens(int n) {
    num = n;
    solve(0);
    return vs;
}

void solve(int row){
    if(row == num){
        vs.push_back(sol);
        return;
    }
    for(int col=0; col<num; col++){
        if(c[col] || ld[row + col] || rd[col - row + num - 1]) continue;
        c[col] = ld[row + col] = rd[col - row + num - 1] = 1;
        sol.push_back(col + 1);
        solve(row + 1);
        c[col] = ld[row + col] = rd[col - row + num - 1] = 0;
        sol.pop_back();
    }
}
