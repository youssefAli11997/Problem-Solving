'''
 - problem link : http://www.spoj.com/problems/LASTDIG/
 - solution by : Youssef Ali
 - spoj profile : http://www.spoj.com/users/youssef_ali/
'''

def fact(n):
    if(n <= 1):
        return 1
    if(dp[n] != -1):
        return dp[n]
    dp[n] = n * fact(n - 1)
    return dp[n]
 
# main program

dp = [-1] * 102

t = int(input())
for i in range(t):
    x = int(input())
    print(fact(x))
