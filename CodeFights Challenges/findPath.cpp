// dfs
// challenge link : https://codefights.com/challenge/n927Ns3HD2q3EMeXB/
vector<vector<int>> global_matrix;
bool vis[7][12], sol;
int w, h;
int dx[4] = {0,0,1,-1},
    dy[4] = {1,-1,0,0};

bool findPath(vector<vector<int>> matrix) {
    global_matrix = matrix;
    h = matrix.size();
    w = matrix[0].size();
    for(int i=0; i<h; i++) for(int j=0; j<w; j++){
        if(matrix[i][j] == 1)
            dfs(i, j, 1);
    }
    return sol;
}

void dfs(int i, int j, int last){
    if(last == h * w){
        sol = true;
        return;
    }
    vis[i][j] = true;
    for(int k=0; k<4; k++){
        int toI = i + dx[k],
            toJ = j + dy[k];
        if(!valid(toI, toJ)) continue;
        if(global_matrix[toI][toJ] != last + 1 || vis[toI][toJ]) continue;
        dfs(toI, toJ, global_matrix[toI][toJ]);
    }
}

bool valid(int i, int j){
    return i>=0 && i<h && j>=0 && j<w;
}
