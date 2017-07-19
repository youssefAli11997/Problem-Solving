
/*
 - problem link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/the-football-fest-6/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, id,tmp; cin>>n>>id;
        stack<int> s;
        for(int i=0; i<n; i++){
            char a; int b; cin>>a;
            if(a =='P'){
                cin>>b;
                s.push(id);
                id = b;
            }else{
                tmp = id;
                id = s.top();
                s.pop();
                s.push(tmp);
            }
        }
        cout<<"Player "<<id<<endl;
    }
    return 0;
}
