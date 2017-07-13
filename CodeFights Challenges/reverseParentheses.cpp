// challenge link : https://codefights.com/challenge/uMQAhyc2uv8RfzbyH/
// Solution by : youssef_ali
// CodeFights Profile : https://codefights.com/profile/youssef_ali
#include <bits/stdc++.h>
using namespace std;

string reverseParentheses(string s) {
    stack<char> cont;
    string ans = "";
    string tmp = "";
    bool open = false;

    for(int i=0; i<s.size(); i++){
        if(s[i]=='('){
            open = true;
            cont.push(s[i]);
        }else if(s[i]==')'){
            while(cont.top() != '('){
                tmp += cont.top();
                cont.pop();
            }
            if(!cont.empty())
                if(cont.top() == '(')
                    cont.pop();
            for(int j=0; j<tmp.size(); j++)
                cont.push(tmp[j]);
            tmp = "";
        }
        else cont.push(s[i]);
    }

    while(!cont.empty()){
        ans = cont.top() + ans;
        cont.pop();
    }

    return ans;
}

int main() {
    cout << reverseParentheses("a(bcdefghijkl(mno)p)q") << endl;
    cout <<"---------------------------------"<<endl;
    cout << reverseParentheses("The ((quick (brown) (fox) jumps over the lazy) dog)") << endl;
    return 0;
}
