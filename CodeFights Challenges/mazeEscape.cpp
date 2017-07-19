// problem link : https://codefights.com/challenge/dF3Qvny3Yn23xvLRb/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

int mazeEscape(int w, int h, vector<int> impassable) {
    char g[w][h];
    memset(g, '.', sizeof g);
    
    for(int i=0; i<impassable.size()/2 ; i++)
        g[impassable[2*i]][impassable[2*i+1]] = '#';
    
    for(int i=0; i<w; i++){
        for(int j=0; j<h; j++)
            cout<<g[i][j];
        cout<<endl;
    }
    
    queue<pair<int, int> > q;
    int level[w][h];
    memset(level, -1, sizeof level);
    
    int dx[] = {0,0,-1,1},
        dy[] = {-1,1,0,0};
    
    q.push({0, 0});
    level[0][0] = 0;
        
    while(!q.empty()) {
        pair<int, int> p = q.front();
        q.pop();
        for(int k=0; k<4; k++){
            int ci = p.first + dx[k],
                cj = p.second + dy[k];
            if(valid(ci, cj, w, h)) {
                if(g[ci][cj] == '#' || level[ci][cj] != -1) continue;
                q.push({ci, cj});
                level[ci][cj] = level[p.first][p.second] + 1;
            }
        }  
    }
    
    return level[w - 1][h - 1];
}

bool valid(int i, int j, int w, int h){
    return i >= 0 && i < w && j >= 0 && j < h;
}
