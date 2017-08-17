/*
 - problem link : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/range-query-2/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <iostream>
using namespace std;

int main(){
    int n,q; cin>>n>>q;
    int arr[n];
    for(int i=0;i<n; i++) cin>>arr[i];
    while(q--){
        int x; cin>>x;
        if(x == 0){
            int s,e; cin>>s>>e;
            cout<<(arr[e-1] ? "ODD" : "EVEN")<<endl;
        }else{
            cin>>x; arr[x-1] ^= 1;
        }
    }
    return 0;
}
