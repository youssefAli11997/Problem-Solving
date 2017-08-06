// problem link : https://www.interviewbit.com/problems/prime-sum/
// gategory : Math
vector<int> Solution::primesum(int A) {
    // sieve
    vector<bool> pr(A+3,1); pr[0] = pr[1] = 0;
    for(int i = 2; i*i<=A; i++) if(pr[i]){
        for(int j=i*i; j<=A; j+=i) pr[j] = 0;  
    }
    
    for(int i=0; i <= A / 2; i++){
        if(pr[i] && pr[A - i]){
            vector<int> v;
            v.push_back(i);
            v.push_back(A - i);
            return v;
        }
    }
}
