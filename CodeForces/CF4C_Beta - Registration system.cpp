#include <bits/stdc++.h>
using namespace std;

map<string, int> dict;
int n;
string s;

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>s;
        if(dict[s] > 0) cout<<s<<dict[s]<<endl;
        else cout<<"OK\n";
        dict[s]++;
    }
    return 0;
}
