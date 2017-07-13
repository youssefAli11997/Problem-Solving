// problem link : https://codefights.com/arcade/intro/level-4/ZCD7NQnED724bJtjN/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali
#include <bits/stdc++.h>
using namespace std;

vector<string> addBorder(vector<string> picture) {
    vector<string> ans;
    
    // border-top
    ans.push_back("");
    for(int i=0; i<picture[0].size() + 2; i++)
        ans[0] += '*';
    
    // border-left and border-right
    for(int i=0; i<picture.size(); i++)
        ans.push_back('*' + picture[i] + '*');
        
    // border-bottom
    ans.push_back("");
    for(int i=0; i<picture[0].size() + 2; i++)
        ans[ans.size()-1] += '*';
    
    return ans;
}

int main(){
    
    return 0;
}
