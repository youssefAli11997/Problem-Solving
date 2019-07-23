#link: https://app.codesignal.com/challenge/FhdrdQNXPsToAbs7M
def differentDigitsNumberSearch(a)
    u = a.map{ |d| d.to_s }.select{|s| s.chars.uniq.size == s.size }[0]
    u.nil? ? -1 : u.to_i
end
