// link : http://abc053.contest.atcoder.jp/tasks/arc068_b
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     int a[200000];
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     sort(a,a+n);
     int x=unique(a,a+n)-a;
     if(x%2)
     {
         cout<<x;
     }
     else
     {
         cout<<x-1;
     }
     return 0;
}
