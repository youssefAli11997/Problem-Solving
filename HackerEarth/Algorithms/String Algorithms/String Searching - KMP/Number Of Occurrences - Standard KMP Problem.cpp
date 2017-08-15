// A test-your-understanding problem
// link : https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/tutorial/
#include <bits/stdc++.h>
using namespace std;

vector<int> prefix((int)1e6 + 6);

void kmp(string s){
    prefix[0] = 0;
    for(int i=1; i<s.size(); i++){
        int j = prefix[i-1];
        while(j > 0 && s[i] != s[j])
            j = prefix[j - 1];
        if(s[i] == s[j])
            j++;
        prefix[i] = j;
    }
}

int main(){
    string p,t; cin>>p>>t;
    string s = p + "$" + t;
    kmp(s);
    int ans = 0;
    for(int i=p.size(); i<s.size(); i++) if(prefix[i] == p.size()){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
