#link: https://app.codesignal.com/arcade/code-arcade/corner-of-0s-and-1s/eC2Zxu5H5SnuKxvPT/solutions

def rangeBitCount(a, b)
    c = 0
    (a..b).each{|x| c += countOnes(x)}
    c
end

def countOnes(num)
    c = 0
    (c += 1; num &= num-1) until num == 0
    c
end
