// problem link : https://www.hackerearth.com/practice/algorithms/string-algorithm/string-searching/practice-problems/algorithm/what-is-your-mobile-number/
#include <iostream>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        bool ok = true;
        if(s.size() != 10 || s[0] == '0'){
            cout<<"NO\n";
            continue;
        }
        for(int i=0; i<s.size(); i++){
            if(!(s[i] >= '0' && s[i] <= '9')){
                cout<<"NO\n";
                ok = false;
                break;
            }
        }
        if(ok) cout<<"YES\n";
    }
    return 0;
}
