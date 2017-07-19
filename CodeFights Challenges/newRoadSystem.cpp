// problem link : https://codefights.com/arcade/graphs-arcade/kingdom-roads/nCMisf4ZKpDLdHevE/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

bool newRoadSystem(std::vector<std::vector<bool>> roadRegister) {
    for(int node = 0; node < roadRegister.size(); node++) {
        int out = 0, in = 0;
        for(int i = 0; i < roadRegister[node].size(); i++)
            out += roadRegister[node][i];
        for(int i = 0; i < roadRegister.size(); i++)
            in += roadRegister[i][node];
        if(in != out)
            return false;
    }
    return true;
}
