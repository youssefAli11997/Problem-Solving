// link : https://www.interviewbit.com/problems/excel-column-title/
string Solution::convertToTitle(int A) {
    string res = "";
    while(A){
        char c = (char)((A % 26) + 'A' - 1);
        A /= 26;
        if(c < 'A'){
            c += 26;
            A -= 1;
        }
        res = c + res;
    }
    return res;
}
