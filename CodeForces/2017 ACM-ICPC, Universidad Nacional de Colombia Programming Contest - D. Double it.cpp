#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    string sol = "";
    while(n > 0){
        if(n % 2 == 1){
            sol = 'A' + sol;
            n = (n-1)/2;
        }
        else{
            sol = 'B' + sol;
            n = (n-2)/2;
        }
    }
    cout<<sol<<endl;
    return 0;
}
