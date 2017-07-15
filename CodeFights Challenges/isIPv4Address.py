# problem link : https://codefights.com/arcade/intro/level-5/veW5xJednTy4qcjso/
# solution by : youssef_ali
# codefights profile : https://codefights.com/profile/youssef_ali

def isIPv4Address(inputString):
    try:
        w,x,y,z = inputString.split(".")
    except:
        return False
    if not w.isdigit() or not x.isdigit() or not y.isdigit() or not z.isdigit():
        return False
    return 0 <= int(w) <= 255 and 0 <= int(x) <= 255 and 0 <= int(y) <= 255 and 0 <= int(z) <= 255
