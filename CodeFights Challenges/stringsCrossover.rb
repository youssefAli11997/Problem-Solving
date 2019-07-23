#link: https://app.codesignal.com/challenge/hbQgkZtYLXHpg7nKR
def stringsCrossover(a, r)
    c = 0
    for i in 0..a.size-1
        for j in i+1..a.size-1
            ok = true
            for k in 0..r.size-1
                ok &&= r[k] == a[i][k] || r[k] == a[j][k]
            end
            c += 1 if ok
        end
    end
    c
end
