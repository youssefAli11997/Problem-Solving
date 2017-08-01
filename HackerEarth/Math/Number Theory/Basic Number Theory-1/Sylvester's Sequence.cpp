/*
 - solved inside a contest
 - problem link : https://www.hackerearth.com/problem/algorithm/sylvesters-sequence-38d8d57e/
 - solution by : Youssef Ali
 - hackerEarth profile : https://www.hackerearth.com/@youssef6
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        int arr[n] = {2};
        for(int j=1; j<n; j++){
            if(j == 1) arr[j] = 3;
            long long tmp = 1;
            for(int k=0; k<j; k++)
                tmp = (tmp%1000000007 * arr[k]%1000000007) %1000000007;
            tmp = (tmp %1000000007 + 1)%1000000007;
            arr[j] = tmp;
        }
        for(int j=0; j<n; j++) cout<<arr[j]<<" "; cout<<endl;
    }
    return 0;
}
