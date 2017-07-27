def solve(num):
    if(num <= 2):
        return t[num]
    if(t[num] != -1):
        return t[num]
    t[num] = solve(num - 2) + solve(num - 1) ** 2
    return t[num]

# main program
t = [-1 for i in range (25)]
t1, t2, n = input().split(" ")
t[1] = int(t1);
t[2] = int(t2)
n = int(n)

print(solve(n))
