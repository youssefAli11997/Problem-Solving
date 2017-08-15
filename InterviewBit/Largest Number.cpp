// link : https://www.interviewbit.com/problems/largest-number/
// interesting problem
// gategory : Arrays
bool comp(int a, int b){
    string sa = to_string(a);
    string sb = to_string(b);   
    return sa+sb > sb+sa;
}

string Solution::largestNumber(const vector<int> &A) {
    vector<int> AA = A;
    string s = "";
    sort(AA.begin(), AA.end(), comp);
    for(int i=0; i<AA.size(); i++) s += to_string(AA[i]);
    
    while(s[0] == '0'){ // removing trailling zeros
        if(s.size() == 1) break;
        s = s.substr(1);
    }
    return s;
}
