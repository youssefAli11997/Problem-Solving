#link: https://app.codesignal.com/challenge/mxmf3ATMtfrKunEqE

def leastFactorial(n)
    while true do
        return n if isFactorial? n
        n += 1
    end
end

def isFactorial?(n)
    x = 2
    while n > 1 do
        if n % x == 0
            n /= x
            x += 1
        else
            return false
        end
    end
    return true
end
