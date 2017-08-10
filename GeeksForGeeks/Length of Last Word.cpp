// problem link : https://www.interviewbit.com/problems/length-of-last-word/

int Solution::lengthOfLastWord(const string &A) {
   int len = 0, prev = 0;
    for(int i=0; i<(int)A.size(); i++){
        if(A[i] != ' ' && A[i] != '\t')
            len++;
        else{
            if(!len) continue;
            prev = len;
            len = 0;
        }
    }
    if(!len) return prev;
   else return len;
}
