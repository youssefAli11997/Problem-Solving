/*
 - problem link : https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/intelligent-girl-1/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <iostream>
using namespace std;

int main(){
    string s; cin>>s;
    int ans[s.size()] = {0};
    ans[s.size() - 1] = ((s[s.size() - 1]-'0') % 2 == 0); // base case
    for(int i = s.size() - 2; i >= 0; i--) // recurrence relation
        ans[i] = ans[i+1] + ((s[i]-'0') % 2 == 0);

    for(int i=0; i<s.size(); i++)
        cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}
