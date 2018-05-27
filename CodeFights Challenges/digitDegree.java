int deg = -1;
int digitDegree(int n) {
    deg++;
    if(n < 10)
        return deg;
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return digitDegree(sum);
}
