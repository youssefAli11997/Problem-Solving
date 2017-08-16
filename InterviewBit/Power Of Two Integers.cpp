// link : https://www.interviewbit.com/problems/power-of-two-integers/
// gategory : Maths
bool Solution::isPower(int A) {
    if(A == 1) return true;
    for(long long i=2; i*i<=A; i++){
        long long tmp = i;
        while(tmp < A){
            tmp *= i;
            if(tmp == A) return true;
        }
        if(tmp == A) return true;
    }
    return false;
}
