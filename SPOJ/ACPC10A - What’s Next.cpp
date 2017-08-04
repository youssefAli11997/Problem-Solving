/*
 - problem link : http://www.spoj.com/problems/ACPC10A/
 - solution by : Youssef Ali
 - spoj profile : http://www.spoj.com/users/youssef_ali/
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    while(true){
        cin >> a >> b >> c;
        if(!a && !b && !c) break;
        if(c - b == b - a){
            cout << "AP " << 2 * c - b << endl; // c + (c - b)
        }
        else{
            cout << "GP " << c * (c / b) << endl;
        }
    }
    return 0;
}
