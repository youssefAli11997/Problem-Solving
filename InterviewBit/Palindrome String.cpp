// problem link : https://www.interviewbit.com/problems/palindrome-string/
// gategory : Strings
int Solution::isPalindrome(string A) {
    string s = "";
    for(int i=0; i<A.size(); i++){
        A[i] = tolower(A[i]);
        if(!isalnum(A[i])) continue;
        s += A[i];
    }
    for(int i=0,j=s.size()-1; i<=j; i++,j--){
        if(s[i] != s[j]) return 0;
    }
    return 1;
}
