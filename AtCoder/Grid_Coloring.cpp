// interesting problem
// link : https://arc080.contest.atcoder.jp/tasks/arc080_b
#include<bits/stdc++.h>
using namespace std;
    
void printIt(int hw[][110], int h, int w){
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout<<hw[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

 int main()
 {
     int h,w,n;
     int a[200000],hw[110][110];
     cin>>h>>w>>n;
     for(int i=0;i<n;i++) cin>>a[i];
     
     int k = 0, put = 0;
     int toggle = 0;
         
     for(int i=0; i<h && put < a[k] && k < n; i++){
         if(toggle == 0)
         for(int j=0; j<w; j++){
             hw[i][j] = k+1;
             put++;
             if(put == a[k]){
                 put = 0;
                k++;
             }
         }
         else
         for(int j=w-1; j>=0; j--){
             hw[i][j] = k+1;
             put++;
             if(put == a[k]){
                 put = 0;
                k++;
             }
         }
         if(put < a[k])
            toggle = 1-toggle;
        else{
            put = 0;
            k++;
        }
     }
     printIt(hw,h,w);
     return 0;
}
