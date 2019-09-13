#link: https://www.hackerrank.com/challenges/the-time-in-words/problem

#!/bin/ruby

require 'json'
require 'stringio'

def timeInWords(h, m)
    if m == 0
        numberToName(h) + " o' clock"
    elsif m <= 30
        minutesInWords(m) + " past " + numberToName(h)
    else
        minutesInWords(60 - m) + " to " + numberToName(h + 1)
    end
end

def minutesInWords(minutes)
    case minutes
    when 15
        "quarter"
    when 30
        "half"
    else
        numberToName(minutes) + " minute" + (minutes > 1 ? "s" : "")
    end
end

def numberToName(num)
    numbersToName = {
      50 => "fifty",
      40 => "forty",
      30 => "thirty",
      20 => "twenty",
      19 => "nineteen",
      18 => "eighteen",
      17 => "seventeen", 
      16 => "sixteen",
      15 => "fifteen",
      14 => "fourteen",
      13 => "thirteen",              
      12 => "twelve",
      11 => "eleven",
      10 => "ten",
      9 => "nine",
      8 => "eight",
      7 => "seven",
      6 => "six",
      5 => "five",
      4 => "four",
      3 => "three",
      2 => "two",
      1 => "one"
    }
    if num <= 20
        numbersToName[num]
    else
        numbersToName[20] + " " + numbersToName[num - 20]
    end
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

h = gets.to_i

m = gets.to_i

result = timeInWords h, m

fptr.write result
fptr.write "\n"

fptr.close()
