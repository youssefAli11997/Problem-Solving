/*

You are at a jewelry store and you would like to buy a necklace for your friend. Each necklace consists of 1 or more beads, and each bead has its own color. In this problem we will represent a necklace using a string of 1 or more lower case English letters, each English letter represents a unique color. For example the string "abc" represents a necklace of 3 beads, each bead has a unique color, and the string "dddd" represents a necklace of 4 beads and all of them have the same color.

You consider a necklace as beautiful only if all its beads have the exact same color, for example these are beautiful necklaces "a", "bb", "cccc". The following are not beautiful "ab", "cccd".

You would like to buy the longest beautiful necklace in the store, the longest is the one that contains the largest number of beads of the same color and no other beads of different colors.

Given the description of all necklaces in the store, your task is to find number of beads in the longest beautiful necklace.
Input

The first line of the input contains an integer n (1 ≤ n ≤ 50), denoting the number of necklaces.

The second line contains n strings s1, s2, ..., sn, each string represents a necklace. Each string is non-empty and consists of at most 50 lower case English letters.
Output

Print one integer, denoting the number of beads in the longest beautiful necklace. If there's no beautiful necklace, print 0.

Examples

Input
3
a bb cccc
Output
4

Input
2
ab cccd
Output
0

*/

#include<bits/stdc++.h>
using namespace std;

#define solved first
#define timeP second.first
#define id second.second

int main(){
    int t; cin>>t;
    int maxx = 0;
    while(t--){
        string s; cin>>s;
        set<char> sett;
        for(int i=0; i<s.size(); i++)
            sett.insert(s[i]);
        if(sett.size() == 1)
            maxx = max(maxx, (int)s.size());
    }
    cout<<maxx<<endl;
    return 0;
}
