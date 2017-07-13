// challenge link : https://codefights.com/challenge/uMQAhyc2uv8RfzbyH/	
// solution by : youssef_ali
// codeFights profile : https://codefights.com/profile/youssef_ali
#include <bits/stdc++.h>
using namespace std;

bool recur(int i, int j, std::vector<std::string> m, char d){
    if(d == 'U') for(int k=i-1; k>=0; k--){
        if(m[k][j] == 'F')
            return true;
        if(m[k][j] == 'R' || m[k][j] == 'L')
            return recur(k,j,m,m[k][j]);
    }
    if(d == 'D') for(int k=i+1; k<m.size(); k++){
        if(m[k][j] == 'F')
            return true;
        if(m[k][j] == 'R' || m[k][j] == 'L')
            return recur(k,j,m,m[k][j]=='R'? 'L':'R');
    }
    if(d == 'L') for(int k=j-1; k>=0; k--){
        if(m[i][k] == 'F')
            return true;
        if(m[i][k] == 'R' || m[i][k] == 'L')
            return recur(i,k,m,m[i][k]=='R'? 'U':'D');
    }
    if(d == 'R') for(int k=j+1; k<m[0].size(); k++){
        if(m[i][k] == 'F')
            return true;
        if(m[i][k] == 'R' || m[i][k] == 'L')
            return recur(i,k,m,m[i][k]=='R'? 'D':'U');
    }
    return false;
}

bool gameOfSigns(std::vector<std::string> m, std::string d) {
    for(int i=0; i<m.size(); i++) for(int j=0; j<m[i].size(); j++)
        if(m[i][j] == 'S')
            return recur(i,j,m,d[0]);
}

int main(){
    string arr[] = {"S-R",
                    "F-R"};
    vector<string> v(arr, arr+2);
    cout<<gameOfSigns(v,"R"); // outputs : 1 (true)
    return 0;
}
