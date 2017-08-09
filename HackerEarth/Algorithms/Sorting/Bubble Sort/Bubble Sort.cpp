// A test-your-understanding problem
// tutorial link : https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/tutorial/
#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n], swaps = 0;
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                swaps++;
            }
        }
    }
    cout<<swaps<<endl;
    return 0;
}
