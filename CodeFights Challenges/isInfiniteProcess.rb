# link: https://app.codesignal.com/challenge/zeJ7jFp3zar5P4Kk7
def isInfiniteProcess(a, b)
    v = (a+b) / 2
    (b - v).abs != (a - v).abs || b < a
end
