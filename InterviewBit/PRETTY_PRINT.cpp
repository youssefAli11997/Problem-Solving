// problem link : https://www.interviewbit.com/problems/prettyprint/
/*  imput :
    5
    output :
    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5
*/

vector<vector<int> > res;

void recur(int a, int b, int e){
    if(b > e) return;
    for(int i = b; i<=e; i++){
        res[b][i] = a;
        res[i][b] = a;
        res[e][i] = a;
        res[i][e] = a;
    }
    recur(a-1, b+1, e-1);
}

vector<vector<int> > Solution::prettyPrint(int A) {
    res.clear();
    for(int i=0; i<2*A-1; i++){
        res.push_back(vector<int>());
        for(int j=0; j<2*A-1; j++)
            res[i].push_back(0);
    }
    recur(A, 0, 2*A-2);
    return res;
}
