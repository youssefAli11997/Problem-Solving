# link: https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

#!/bin/ruby

require 'json'
require 'stringio'

# Complete the designerPdfViewer function below.
def designerPdfViewer(h, word)
    word.size * word.split('').map {|letter| h[letter.ord - 'a'.ord] }.max
end

fptr = File.open(ENV['OUTPUT_PATH'], 'w')

h = gets.rstrip.split(' ').map(&:to_i)

word = gets.to_s.rstrip

result = designerPdfViewer h, word

fptr.write result
fptr.write "\n"

fptr.close()
