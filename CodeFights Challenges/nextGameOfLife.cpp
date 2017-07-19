// challenge link : https://codefights.com/challenge/J9tdW6Fo7FiHmsqk4/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali
vector<vector<int>> nextGameOfLife(vector<vector<int>> seed) {
    int dx[] = {0,0,1,1,1,-1,-1,-1};
    int dy[] = {1,-1,0,1,-1,0,1,-1};
    int n = seed.size();
    int m = seed[0].size();
    vector<vector<int>> next(n, vector<int>(m));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) {
        int L = 0, D = 0;
        for(int k=0; k<8; k++) if(valid(i+dx[k], j+dy[k], n, m)) {
            if(seed[i+dx[k]][j+dy[k]]) L++;
            else D++;
        }
        if(seed[i][j] && (L < 2 || L > 3))
            next[i][j] = 0;
        else if(!seed[i][j] && L == 3)
            next[i][j] = 1;
        else
            next[i][j] = seed[i][j];
    }
    return next;
}

bool valid(int i, int j, int n, int m){
    return i >= 0 && i < n && j >= 0 && j < m;
}
