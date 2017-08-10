// problem link : https://www.interviewbit.com/problems/reverse-bits/

unsigned int toInt(string s, int idx, int p){
    if(idx == (int)s.size()) return 0;
    return (s[idx]-'0') * pow(2, p) + toInt(s, idx+1, p+1);
}

unsigned int Solution::reverse(unsigned int A) {
    if(!A) return 0;
    string s;
    while(A){
        s += (A%2) + '0';
        A /= 2;
    }
    while((int)s.size() < 32)
        s += '0';
    std::reverse(s.begin(), s.end());
    return toInt(s, 0, 0);
}
