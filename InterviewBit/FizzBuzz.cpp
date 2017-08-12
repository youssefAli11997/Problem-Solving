// problem link : https://www.interviewbit.com/problems/fizzbuzz/
// gategory: Math
vector<string> Solution::fizzBuzz(int A) {
    vector<string> vs;
    for(int i=1; i<=A; i++){
        string res = "";
        if(i % 3 == 0) res += "Fizz";
        if(i % 5 == 0) res += "Buzz";
        if(res != "") vs.push_back(res);
        else vs.push_back(to_string(i));
        
    }
    return vs;
}
