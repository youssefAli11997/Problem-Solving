//link: https://www.hackerrank.com/challenges/the-birthday-bar/problem
static int solve(int n, int[] s, int d, int m){
    int sum = 0, ans = 0;
    for(int i=0; i<m; i++){
        sum += s[i];
    }
    for(int i=m; i<n; i++){
        if(sum == d)
            ans++;
        sum -= s[i-m];
        sum += s[i];
    }
    if(sum == d)
        ans++;
    return ans;
}
