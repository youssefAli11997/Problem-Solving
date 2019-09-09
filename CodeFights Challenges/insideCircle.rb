#link: https://app.codesignal.com/challenge/4CzBshDsiexaz5rxt

def insideCircle(point, center, radius)
    destBetween(point, center) <= radius
end

def destBetween(a, b)
   Math.sqrt((a[0] - b[0])**2 + (a[1] - b[1])**2) 
end
