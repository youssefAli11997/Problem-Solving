// problem link : https://www.hackerrank.com/challenges/bigger-is-greater

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin>>n;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        string tmp = s;
        next_permutation(s.begin(),s.end());
        if(tmp >= s) cout<<"no answer\n";
        else cout<<s<<endl;
    }
    return 0;
}
