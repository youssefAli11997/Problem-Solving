/*

You are given an increasing sequence of n positive integers t1, t2, ..., tn.

In one move you can choose two consecutive elements and replace them with their sum. For example, in a sequence (3, 5, 10, 21) you can choose 5 and 10 and replace them with a single number 15. The new sequence will be (3, 15, 21).

After every move, a new sequence must still be increasing. Additionally, you aren't allowed to choose the last element (so, in the example above you aren't allowed to choose 10 and 21).

What is the maximum possible number of moves you can make?

Please note that the increasing sequence is a sequence where every element is strictly smaller than the next one (ti < ti + 1).
Input

The first line of the input contains an integer n (2 ≤ n ≤ 50), denoting the length of the sequence.

The second line contains n integers t1, t2, ..., tn (1 ≤ t1 < t2 < ... < tn ≤ 109) – the initial sequence that is guaranteed to be increasing.
Output

Print one integer, denoting the maximum possible number of moves you can make.

Examples

Input
4
3 5 10 21
Output
2

Input
5
9 10 20 40 75
Output
2

Note

In the first test case, you can add the 3 and 5 to get (8, 10, 21), then add the 8 and 10 to get (18, 21), and you can't make anymore moves.

In the second test case, you can add the 9 and 10 to get (19, 20, 40, 75), then add the 20 and 40 to get (19, 60, 75), and you can't make anymore moves.

*/

#include<bits/stdc++.h>
using namespace std;

long long calc(long long x){
    int ans = 0;
    while(x){
        if(x % 10 != 9)
            break;
        ans++;
        x /= 10;
    }
    return ans;
}

int main(){
    int n; scanf("%d",&n);
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    bool cont = true;
    int ans = 0;
    while(cont){
        bool ok = false;
        for(int i=a.size()-2; i>=1; i--){
            if(a[i] + a[i-1] < a[i+1]){
                ans++;
                ok = true;
                vector<int> v;
                for(int j=0; j<i-1 && j < (int)a.size(); j++) v.push_back(a[j]);
                v.push_back(a[i] + a[i-1]);
                for(int j=i+1; j<(int)a.size(); j++) v.push_back(a[j]);
                a = vector<int>(v.begin(),v.end());
                //for(int j=0; j<a.size(); j++) cout<<a[j]<<" ";
                //cout<<endl;
            }
        }
        if(!ok) cont = false;
    }
    cout<<ans<<endl;
    return 0;
}
