/*
ID: youssef24
LANG: C
TASK: ride
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char a[20],b[20];
    int i,aVal=1,bVal=1;
//    scanf("%s",a);
//    scanf("%s",b);

    FILE *fin = fopen("ride.in","r");
    FILE *fout = fopen("ride.out","w");

    fscanf(fin,"%s",a);
    fscanf(fin,"%s",b);

    for(i=0; i<strlen(a); i++)
        aVal *= a[i]-'A'+1;

    for(i=0; i<strlen(b); i++)
        bVal *= b[i]-'A'+1;

    //printf("%d : %d\n",aVal,bVal);

    if((aVal%47)==(bVal%47))
        fprintf(fout,"GO\n");
        //printf("GO\n");
    else
        fprintf(fout,"STAY\n");
        //printf("STAY\n");

    return 0;
}
