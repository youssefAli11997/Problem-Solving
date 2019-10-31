#link: https://app.codesignal.com/challenge/TieSbaDHnbGyKjfKa

def digitDistanceNumber(n)
    ans = i = 0
    while n > 9
        ans += (n % 10 - (n /= 10) % 10).abs * (10 ** i)
        i += 1
    end
    ans
end
