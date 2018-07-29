#include <stdio.h>
using namespace std;

int main(){
    long long n,m,x,d, fe = 0, le = 0, me = 0;
    bool neg = false;
    scanf("%I64d %I64d", &n, &m);
    while(m--){
        scanf("%I64d %I64d", &x, &d);
        if(d < 0){
            neg = true;
            if(n % 2 == 0){
                fe += x + d * (n/2);
                le += x + d * (n/2 - 1);
            }
            else{
                fe += x + d * (n/2);
                le += x + d * (n/2);
            }
            me += x;
        }
        else{
            fe += x;
            le += x + d * (n - 1);
            me += x + d * (n/2);
        }
    }
    double sum = (n/2 + 1) / 2.0 * (fe + me) + (n%2 == 0? n/2 : (n/2 + 1)) / 2.0 * (me + le) - me;
    printf("%f\n", 1.0 * sum / n);
    return 0;
}
