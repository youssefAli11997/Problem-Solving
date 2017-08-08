// problem link : https://codefights.com/arcade/intro/level-5/5xPitc3yT3dqS7XkP/

vector<vector<int>> boxBlur(vector<vector<int>> image) {
    int dx[] = {0,0,0,1,1,1,-1,-1,-1};
    int dy[] = {0,-1,1,0,-1,1,0,-1,1};
    int n = image.size();
    int m = image[0].size();
    vector<vector<int>> ret(n-2, vector<int>(m-2));
    for(int i=1; i<n-1; i++) for(int j=1; j<m-1; j++) {
        int sum = 0;
        for(int k=0; k<9; k++) if(valid(n,m,i+dx[k],j+dy[k])) {
            sum += image[i+dx[k]][j+dy[k]];
        }
        ret[i-1][j-1] = sum / 9;
    }
    return ret;
}

bool valid(int n, int m, int i, int j){
    return i>=0 && i<n && j>=0 && j<m;
}
