# link: https://app.codesignal.com/challenge/xKmAsAs8eCRX7Sh9b
def graphEdges(matrix)
    c = 0
    matrix.each { |row|
        c += row.select{|b| b}.count
    }
    c / 2
end
