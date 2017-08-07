// problem link : https://www.interviewbit.com/problems/palindrome-integer/

bool Solution::isPalindrome(int A) {
    string s = to_string(A);
    string w = s;
    reverse(w.begin(), w.end());
    return w == s;
}
