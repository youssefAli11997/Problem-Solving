// problem link : https://www.interviewbit.com/problems/number-of-1-bits/
// Gategory : Bit Manipulation
int Solution::numSetBits(unsigned int A) {
    int cnt = 0;
    while(A){
        A &= A-1;
        cnt++;
    }
    return cnt;
}
