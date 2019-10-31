#link: https://app.codesignal.com/challenge/F54etL8JkcJtQpKAZ

def fibonacciSum(n)
    ans = []
    generateFiboonacciNumbers(n).reverse.each do |fibo|
        if fibo <= n
            ans.push fibo
            n -= fibo
        end
        break if n == 0
    end
    ans.reverse
end

def generateFiboonacciNumbers(n) # generates all fibonacci numbers <= n
    fibos = []
    a = 0; b = 1; c = 1;
    while a <= n
        fibos.push a
        c = a + b; a = b; b = c
    end
    fibos
end
