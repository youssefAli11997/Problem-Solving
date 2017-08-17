// link : https://www.urionlinejudge.com.br/judge/en/problems/view/1087
#include <bits/stdc++.h>
using namespace std;

int main(){
    while(1){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(!x1&&!x2&&!y1&&!y2) break;
        if(x1 == x2 && y1 == y2)
            cout<<"0\n";
        else if((x1+y1 == x2+y2) || (x1-y1 == x2-y2) || (x1 == x2) || (y1 == y2))
            cout<<"1\n";
        else
            cout<<"2\n";
    }
    return 0;
}
