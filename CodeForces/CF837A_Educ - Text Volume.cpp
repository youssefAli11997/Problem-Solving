#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int main(){
    int n,mx=-1,curr = 0; string s,w = "";
    cin>>n; getline(cin,s);
    getline(cin,s);
    for(int i=0; i<n; i++){
        if(s[i] != ' '){
            if(isupper(s[i])) curr++;
            w += (char)s[i];
        }
        else{
            mx = max(mx,curr);
            w = "";
            curr = 0;
        }
    }
    cout<<max(mx,curr)<<endl;
    return 0;
}
