#include <cstdio>
#include <bitset>
using namespace std;

bitset<1000003> p;

void sieve(int upto){
    p.set();
    p[0] = 0; p[1] = 0;
    for(int i=2; i*i<=upto+1; i++)if(p[i]){
        for(int j=i*i; j<=upto+1; j+=i)
            p[j] = 0;
    }
}

int digitSum(int n){
    if(n==0)return 0;
    return (n%10)+digitSum(n/10);
}

int main(){
    int n; scanf("%d",&n);
    sieve(1000000);

    int ans[1000001]={0},s=0;
    for(int k=0; k<=1000000; k++){
        if(p[k]&&p[digitSum(k)])
            s++;
        ans[k] = s;
    }

    while(n--){
        int t1,t2;
        scanf("%u %u",&t1,&t2);
        s = ans[t2]-ans[t1];
        if(p[t1]&&p[digitSum(t1)])
            s++;
        printf("%d\n",s);
    }
    return 0;
}
