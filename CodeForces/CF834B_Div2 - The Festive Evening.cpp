#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n, k; string s;
    cin>>n>>k;
    cin>>s;
    int cum[n+1] = {0};
    for(char c = 'A'; c<='Z'; c++){
        for(int i=0; i<n; i++){
            if(s[i] == c){
                cum[i]++;
                break;
            }
        }
    }
    for(char c = 'A'; c<='Z'; c++){
        for(int i=n-1; i>=0; i--){
            if(s[i] == c){
                cum[i+1]--;
                break;
            }
        }
    }
    for(int i=1; i<n+1; i++){
        cum[i] += cum[i-1];
        if(cum[i] > k){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
