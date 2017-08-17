/*
  - A test-your-understanding problem
  - tutorial link : https://www.hackerearth.com/practice/data-structures/arrays/multi-dimensional/tutorial/
*/
#include <iostream>
using namespace std;

int main(){
    int n,m,arr[12][12]; cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0; j<m; j++){
        for(int i=0; i<n; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
