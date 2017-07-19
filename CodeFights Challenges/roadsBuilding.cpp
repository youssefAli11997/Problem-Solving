// problem link : https://codefights.com/arcade/graphs-arcade/kingdom-roads/nCMisf4ZKpDLdHevE/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

std::vector<std::vector<int>> roadsBuilding(int cities, std::vector<std::vector<int>> roads) {
    std::vector<std::vector<int>> ret;
    bool adjMat[cities][cities];
    
    // initialize idjMat
    memset(adjMat, false, sizeof adjMat);
    
    for(int i = 0; i < roads.size(); i++) {
        adjMat[roads[i][0]][roads[i][1]] = true;
        adjMat[roads[i][1]][roads[i][0]] = true;
    }
    
    for(int i = 0; i < cities; i++) for(int j = i+1; j < cities; j++)
        if(adjMat[i][j] == 0){
            std::vector<int> v(2);
            v[0] = i;
            v[1] = j;
            ret.push_back(v);
        }
    
    return ret;
}
