// link : http://abc070.contest.atcoder.jp/tasks/abc070_b
// solved inside contest
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    int arr1[101] = {0}, arr2[101] = {0}, cnt = 0;
    for(int i=a; i<b; i++)
        arr1[i] = 1;
    for(int i=c; i<d; i++)
        arr2[i] = 1;
    for(int i=0; i<=100; i++){
        if(arr1[i] == 1 && arr2[i] == 1) cnt++;}
    cout<<cnt<<endl;
    return 0;
}
