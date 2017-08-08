// problem link : https://codefights.com/arcade/intro/level-5/ZMR5n7vJbexnLrgaM/

vector<vector<int> > minesweeper(vector<vector<bool> > matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    int dx[] = {0,1,-1,0,1,-1,1,-1};
    int dy[] = {1,1,1,-1,-1,-1,0,0};
    vector<vector<int> > ret(n, vector<int>(m,0));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++){
        for(int k=0; k<8; k++) if(valid(i+dx[k], j+dy[k], n, m))
            ret[i][j] += matrix[i+dx[k]][j+dy[k]];
    }
    return ret;
}

bool valid(int i, int j, int n, int m){
    return i>=0 && i<n && j>=0 && j<m;
}
