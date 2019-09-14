#link: https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#!/bin/ruby

require 'json'
require 'stringio'
require 'set'

# Complete the isValid function below.
def isValid(s)
    freqs = Array.new 26,0
    s.split('').each do |char|
        freqs[char.ord - 'a'.ord] += 1
    end
    uniqueValues = Set.new freqs.select {|ele| ele != 0}
    uniqueValues = uniqueValues.to_a.sort
    return "NO" if uniqueValues.length > 2
    return "YES" if uniqueValues.length == 1 || (count(freqs, uniqueValues[0]) == 1 && (uniqueValues[1] - uniqueValues[0] == 1  || uniqueValues[0] == 1)) || (count(freqs, uniqueValues[1]) == 1 && (uniqueValues[1] - uniqueValues[0] == 1 || uniqueValues[1] == 1)) 
    return "NO"
end

def count(arr, ele)
    arr.select{|arrEle| arrEle == ele}.length
end

s = gets.to_s.rstrip

result = isValid s

p result
