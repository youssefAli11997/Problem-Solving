// problem link : https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/count-numbers-46/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, cnt = 0; string s; cin>>n>>s;
        bool num = false;
        for(int i=0; i<n; i++){
            if(s[i] >= '0' && s[i] <= '9')
                num = true;
            else if(num){
                cnt++;
                num = false;
            }
        }
        if(num)
            cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
