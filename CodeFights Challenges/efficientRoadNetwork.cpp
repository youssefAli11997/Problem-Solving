// problem link : https://codefights.com/arcade/graphs-arcade/kingdom-roads/ty4w8WJZ4sZSBNK5Q/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

bool efficientRoadNetwork(int n, std::vector<std::vector<int>> roads) {
    if(n == 1) return true;
    bool adjMat[n+1][n+1];
    memset(adjMat, 0, sizeof adjMat);
    for(int i=0; i<roads.size(); i++){
        adjMat[roads[i][0]][roads[i][1]] = true;
        adjMat[roads[i][1]][roads[i][0]] = true;
    }
    bool ok = true;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++){
        if(!adjMat[i][j]){
            ok = false;
            for(int k=0; k<n; k++) if(adjMat[j][k] && adjMat[k][i])
                ok = true;
        }
        if(!ok) return false; 
    }
    return ok;
}
