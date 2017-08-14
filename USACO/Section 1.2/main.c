/*
ID: youssef24
LANG: C
TASK: gift1
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int FindMe(char name[20], char group[][20], int np){
    int i=0;
    for(i; i<np; i++){
        if(strcmp(name,group[i])==0)
            return i;
    }
    return -1;
}

int main()
{
    FILE* fin = fopen("gift1.in","r");
    FILE* fout = fopen("gift1.out","w");

    int np,i;
    fscanf(fin,"%d",&np);
    char group[np][20];
    int have[np];
    char name[20];

    //getting members names
    for(i=0; i<np; i++)
        fscanf(fin,"%s",group[i]);

    //initialize their money to zero
    for(i=0; i<np; i++)
        have[i] = 0;

    while(fscanf(fin,"%s",name)!=EOF){
        int money,num;
        //scanf("%s",name);
        fscanf(fin,"%d %d",&money,&num);
//        if(!money && !num)
//            break;
        if(!num)
            continue;
        have[FindMe(name,group,np)] -= money;
        have[FindMe(name,group,np)] += money%num;
        int gift = money/num;
        for(i=0; i<num; i++){
            fscanf(fin,"%s",name);
            have[FindMe(name,group,np)] += gift;
        }
//        printf("====================\n");
//        for(i=0; i<np; i++)
//            printf("%s %d\n",group[i],have[i]);
//        printf("====================\n");
    }
    for(i=0; i<np; i++)
        fprintf(fout,"%s %d\n",group[i],have[i]);

    return 0;
}
