// iterative complete search
#include <bits/stdc++.h>
using namespace std;

bool islucky(string x){
    return (x[0]+x[1]+x[2] == x[3]+x[4]+x[5]);
}

int digDiff(string s, string x){
    int ans = 0;
    for(int i=0; i<s.size(); i++)
        ans += (s[i] != x[i]);
    return ans;
}

string str(char a, char b, char c, char d, char e, char f){
    string s = "";
    s += a; s += b; s += c; s += d; s += e; s += f;
    return s;
}

int main(){
    string s, gen = ""; cin>>s;
    int mn = 7, diff;
    for(char a = '0'; a <= '9'; a++)
        for(char b = '0'; b <= '9'; b++)
            for(char c = '0'; c <= '9'; c++)
                for(char d = '0'; d <= '9'; d++)
                    for(char e = '0'; e <= '9'; e++)
                        for(char f = '0'; f <= '9'; f++){
                            gen = str(a,b,c,d,e,f);
                            diff = digDiff(s, gen);
                            if(islucky(gen) && diff < mn){
                                mn = diff;
                            }
                        }
    cout<<mn<<endl;
    return 0;
}
