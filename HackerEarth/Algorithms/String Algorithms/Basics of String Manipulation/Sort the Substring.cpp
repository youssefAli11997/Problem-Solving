/*
 - A test-your-understanding problem
 - tutorial link : https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/tutorial/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>>s;
        int l,r; cin>>l>>r;
        sort(s.begin()+l, s.begin()+r+1);
        reverse(s.begin()+l, s.begin()+r+1);
        cout<<s<<endl;
    }
    return 0;
}
