/*
 - problem link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-philosophers-stone/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, v, q, x, mo = 0, ans =-1; cin>>n;
    queue<int> val;
    stack<int> st;
    for(int i=0; i<n; i++) {
        cin>>v;
        val.push(v);
    }
    cin>>q>>x;
    while(q--) {
        string s; cin>>s;
        if(s == "Harry"){
            st.push(val.front());
            mo += val.front();
            val.pop();
            if(mo == x)
                ans = st.size();
        } else {
            mo -= st.top();
            st.pop();
        }
    }
    cout<<ans<<endl;
    return 0;
}
