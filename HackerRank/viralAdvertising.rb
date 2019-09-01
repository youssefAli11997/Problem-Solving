#link: https://www.hackerrank.com/challenges/strange-advertising/problem

#!/bin/ruby

require 'json'
require 'stringio'

# Complete the viralAdvertising function below.
def viralAdvertising(n)
    likes = current = 2
    for i in 1...n do
        likes += current = current * 3 / 2
    end
    return likes
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

n = gets.to_i

result = viralAdvertising n

fptr.write result
fptr.write "\n"

fptr.close()
