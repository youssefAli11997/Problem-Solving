#link: https://app.codesignal.com/challenge/jwAXkHKwZ5CCX6HjH

def sumOfDivisors(n)
    return n if n == 1
    sum = 1 + n
    (2..n**0.5).each {|x| sum += x + (n / x == x ? 0 : n / x) if n % x == 0 }
    sum
end
