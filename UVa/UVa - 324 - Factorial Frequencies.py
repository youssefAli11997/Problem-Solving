def fact(n):
    if(n <= 1):
        return 1;
    return n * fact(n - 1)
    
while(True):
    n = int(input())
    if(n == 0):
        break
    res = fact(n)
    freq = [0]*10
    
    while(res > 0):
        freq[res % 10] += 1
        res //= 10
    print("%d! --" %n)
    print("   ", end="")
    for i in range(5):
        if(i>0):
            print("    ", end="")
        print("(%d)%6d" %(i, freq[i]), end = "")
    print("")
    print("   ", end="")
    for i in range(5,10):
        if(i>5):
            print("    ", end="")
        print("(%d)%6d" %(i, freq[i]), end = "")
    print("")
