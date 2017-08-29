// A test-your-understanding problem
// tutorial link : https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/
#include <iostream>
using namespace std;

int main(){
    int n, m, idx = -1, x; cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x == m)
            idx = i+1;
    }
    cout<<idx<<endl;
    return 0;
}
