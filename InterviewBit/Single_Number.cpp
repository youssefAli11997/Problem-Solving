// problem link :
// gategory : Bit Manipulation
int Solution::singleNumber(const vector<int> &A) {
    int ans = 0;
    for(int i=0; i<(int)A.size(); i++)
        ans ^= A[i];
    return ans;
}
