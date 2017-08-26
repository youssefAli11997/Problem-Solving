#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int k,freq[26] = {0}, moves = 0, diff = 0; string s; cin>>s>>k;
    if(k > s.size()){
        cout<<"impossible\n";
        return 0;
    }
    for(int i=0; i<s.size(); i++)
        freq[s[i]-'a']++;
    for(int i=0; i<26; i++) if(freq[i])
        diff++;
        
    cout<<max(0, k - diff)<<endl;
    return 0;
}
