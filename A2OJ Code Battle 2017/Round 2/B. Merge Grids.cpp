/*

You are given two grids of size 3 × 3. In both grids, each cell either is empty (denoted by '.') or it contains a sloping line '\' or '/'.

The two grids are transparent. Their only visible parts are sloping lines in some cells, mentioned in the previous paragraph.

We put one grid on the other, obtaining a new grid of size 3 × 3, where we see only sloping lines from the two initial grids. Your task is to print the new grid to the output.

If both corresponding cells in the initial grids were empty, the new cell is empty as well (we don't see any lines there, you print a '.' character). If only one of two cells contained a line, we see that line now in the new cell - the same if both cells contained the same line (e.g. both contained '\').

But if the two cells contained lines with different slopes ('\' and '/'), now we see them both in the new grid, so you should print 'X' for that cell (an uppercase 'X' character).
Input

The input starts with the description of the first grid, which is 3 consecutive lines, each line contains exactly 3 characters, each character will be either '.', '/' or '\'.

Followed by an empty line, then 3 more lines in the exact same format like the above, which are the description of the second grid.
Output

Print 3 lines, with exactly 3 characters in each line, which are the description of the output grid as described above. Each character should be either '.', '/', '\' or 'X'.

Example

Input
//.
./.
/./

/.\
./.
\/\

Output
//\
./.
X/X

*/

#include<bits/stdc++.h>
using namespace std;

#define solved first
#define timeP second.first
#define id second.second

int main(){
    string g1[3],g2[3];
    for(int i=0; i<3; i++)
        cin>>g1[i];
    for(int i=0; i<3; i++)
        cin>>g2[i];
    for(int i=0; i<3; i++){for(int j=0; j<3; j++){
        if(g1[i][j] == g2[i][j]){
            cout<<g1[i][j];
        }
        else{
            if(g1[i][j] == '.')
                cout<<g2[i][j];
            else if(g2[i][j] == '.')
                cout<<g1[i][j];
            else if((g1[i][j] == '/' && g2[i][j] == '\\') || (g2[i][j] == '/' && g1[i][j] == '\\'))
                cout<<'X';
        }
    } cout<<endl;
    }
    return 0;
}
