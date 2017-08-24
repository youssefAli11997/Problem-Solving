#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k, freq[27] = {0}; cin>>n>>k;
    string s; cin>>s;
    for(int i=0; i<n; i++){
        freq[s[i]-'a']++;
        if(freq[s[i]-'a'] > k){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
