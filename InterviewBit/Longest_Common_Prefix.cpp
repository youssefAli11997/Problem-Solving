// problem link : https://www.interviewbit.com/problems/longest-common-prefix/
// gategory : Strings
string Solution::longestCommonPrefix(vector<string> &A) {
    string res = A[0];
    for(int i=1; i<(int)A.size(); i++){
        string tmp = "";
        for(int j=0; j<(int)res.size(); j++){
            if(res[j] == A[i][j]){
                tmp += res[j];
            }
            else break;
        }
        res = tmp;
    }
    return res;
}
