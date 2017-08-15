// link : https://www.interviewbit.com/problems/valid-ip-addresses/
// gategory : Strings, Complete Search (Recursive Backtracking)

vector<string> vs; // valid solutions will be pushed into this vector

bool valid(string s){
    string num = "";
    for(int i=0; i<s.size(); i++){
        if(s[i] != '.')
            num += s[i];
        else{
            if(num[0] == '0' && num.size() > 1) return false;
            int inum = stoi(num);
            if(!(inum >= 0 && inum <= 255)) return false;
            num = "";
        }
    }
    // last part
    if(num[0] == '0' && num.size() > 1) return false;
    int inum = stoi(num);
    if(!(inum >= 0 && inum <= 255)) return false;
    return true;
}

string tostring(vector<char> s){
    string r = "";
    for(int i=0; s[i] != ' '; i++){
        r += s[i];
    }
    return r;
}

void recur(string s, int idx, vector<char> sol, int cnt, int i){
    if(cnt > 3 || idx > s.size()) return;
    if(idx == s.size() && cnt == 3){
        string ssol = tostring(sol);
        if(valid(ssol)){
            vs.push_back(ssol);
        }
        return;
    }
    sol[i] = s[idx];
    if(idx < s.size()-1){
        sol[i+1] = '.';
        recur(s, idx+1, sol, cnt+1, i+2);
    }
    recur(s, idx+1, sol, cnt, i+1);
}

vector<string> Solution::restoreIpAddresses(string A) {
    vs.clear();
    vector<char> sol((int)1e3, ' ');
    recur(A, 0, sol, 0, 0);
    return vs;
}
