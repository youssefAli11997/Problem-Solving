#link: https://www.hackerrank.com/challenges/counting-valleys/problem

#!/bin/ruby

require 'json'
require 'stringio'

# Complete the countingValleys function below.
def countingValleys(n, s)
    level = 0; valleys = 0; isDownSeaLevel = false
    for i in 0..n
        level += (s[i] == 'U' ? 1 : -1)
        isDownSeaLevel = true if level == -1
        if level == 0 && isDownSeaLevel
            valleys += 1
            isDownSeaLevel = false
        end
    end
    valleys
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

n = gets.to_i

s = gets.to_s.rstrip

result = countingValleys n, s

fptr.write result
fptr.write "\n"

fptr.close()
