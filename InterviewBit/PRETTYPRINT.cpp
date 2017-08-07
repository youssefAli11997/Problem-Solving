// problem link : https://www.interviewbit.com/problems/prettyprint/

vector<vector<int> > res;

void recur(int a, int b, int e){
    if(b > e) return;
    for(int i = b; i<=e; i++)
        res[b][i] = a;
    for(int i = b; i<=e; i++)
        res[i][b] = a;
    for(int i = b; i<=e; i++)
        res[e][i] = a;
    for(int i = b; i<=e; i++)
        res[i][e] = a;
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
