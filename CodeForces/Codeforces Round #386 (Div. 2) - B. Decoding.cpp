//link: http://codeforces.com/contest/746/problem/B
#include <iostream>
#include <string>
using namespace std;

int main(){
    int n; cin>>n;
    string en, de = ""; cin>>en;
    de += en[0];
    bool left = true;
    for(int i=1; i<n; i++){
        if((n % 2 == 0 && i == 1) || !left){
            de += en[i];
            left = true;
        }
        else{
            de = en[i] + de;
            left = false;
        }
    }
    cout<<de<<endl;
    return 0;
}
