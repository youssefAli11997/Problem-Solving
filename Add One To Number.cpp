// problem link : https://www.interviewbit.com/problems/add-one-to-number/

vector<int> Solution::plusOne(vector<int> &A) {
    reverse(A.begin(), A.end());
    if(A[0] < 9){
        A[0]++;
    }
    else{
        int i = 0;
        A[i] = 0;
        if(A.size() > 1) A[i+1]++;
        i++;
        while(A[i] > 9 && i < A.size() - 1){
            A[i+1]++;
            A[i] = 0;
            i++;
        }
        if(A[i] > 9){
            A[i] = 0;
            A.push_back(1);
        }
    }
    while(A[A.size() - 1] == 0)
        A = vector<int>(A.begin(), A.end()-1);
    reverse(A.begin(), A.end());
    return A;
}
