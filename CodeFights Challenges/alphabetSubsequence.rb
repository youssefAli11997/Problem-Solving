def alphabetSubsequence(s)
    (s =~ Regexp.new('\A' + (('a'..'z').to_a.join '?') + '?\z')) ? true : false
end
