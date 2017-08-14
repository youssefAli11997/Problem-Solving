/*
ID: youssef24
PROG: beads
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

int calcBeads(string necklace,int n){
    int i,j,beads=0;
    char color;
    // forward
    for(i=0; i<n; i++){
        if(necklace[i]=='w')
            beads++;
        else{
            color = necklace[i];
            for(j=i; j<n; j++){
                if(necklace[j]==color || necklace[j]=='w')
                    beads++;
                else
                    break;
            }
            break;
        }
    }
    // backward
    for(i=n-1; i>=0; i--){
        if(necklace[i]=='w')
            beads++;
        else{
            color = necklace[i];
            for(j=i; j>=0; j--){
                if(necklace[j]==color || necklace[j]=='w')
                    beads++;
                else
                    break;
            }
            break;
        }
    }
    if(beads>n)
        beads = n;

    return beads;
}

int main()
{
    ifstream fin ("beads.in");
    ofstream fout ("beads.out");
    int n,i,maxi=-1;
    fin>>n;

    string necklace;
    fin>>necklace;

    for(i=0; i<n; i++){
        string temp = necklace.substr(i,n) + necklace.substr(0,i);
        int beads = calcBeads(temp,n);
        if(beads>maxi){
            maxi = beads;
        }
    }
    fout<<maxi<<endl;
    return 0;
}
