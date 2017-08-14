/*
ID: youssef24
PROG: friday
LANG: C++
*/

#include <iostream>
#include <fstream>

bool isLeap(int y){
    if((y%4==0 && y%100!=0) || y%400==0)return true;
    return false;
}

using namespace std;

int main()
{
    freopen("friday.in","rt",stdin);
    freopen("friday.out","wt",stdout);

    int n; cin>>n;

    int day=13,y=1900;
    int year[12] = {31,28,31,30,31,30,31,31,30,31,30,31},
        lyear[12] = {31,29,31,30,31,30,31,31,30,31,30,31},
        sum[7]={0};

    for(int i=0; i<n; i++){
        for(int m=0; m<12; m++){
            sum[day%7]++;
            if(isLeap(y))
                day+=lyear[m];
            else
                day+=year[m];
        }
        y++;
    }
    cout<<sum[6];
    for(int i=0; i<6; i++)cout<<" "<<sum[i];
    cout<<endl;

    return 0;
}
