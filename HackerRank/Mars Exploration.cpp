// problem link : https://www.hackerrank.com/challenges/mars-exploration
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,tmp = "", orig = "SOS"; cin >> s;
    int ans = 0;
    for(int i=0; i<s.size(); i++){
        if(tmp.size() < 3){
            tmp += s[i];
        }
        else{
            for(int j=0; j<3; j++)
                if(tmp[j] != orig[j])
                    ans++;
            tmp = s[i];
        }
    }
    // last one
    for(int j=0; j<3; j++)
        if(tmp[j] != orig[j])
            ans++;
    cout << ans << endl;
    return 0;
}
