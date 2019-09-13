#link: https://app.codesignal.com/arcade/code-arcade/at-the-crossroads/J7PQDxpWqhx7HrvBZ

require 'set'

def metroCard(lastNumberOfDays)
   monthsDays = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
   ans = Set.new
   monthsDays.each_with_index do |ele, i|
      ans << monthsDays[(i+1) % monthsDays.length] if ele == lastNumberOfDays
   end
   ans.to_a.sort
end
