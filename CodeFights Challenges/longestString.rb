#link: https://app.codesignal.com/challenge/myNEg9Cd45k8wmyBJ
def longestString(a)
    a.select {|s| a.map {|s| s.size}.max == s.size}[0]
end
