//link: https://codefights.com/company-challenges/uber/4c3qzzQg8Zg9AfLKH
string fancyRide(int l, vector<double> fares) {
    string types[] = {"UberX", "UberXL", "UberPlus", "UberBlack", "UberSUV"};
    for(int i=fares.size()-1; i>=0; i--){
        if(fares[i] * l <= 20){
            return types[i];
        }
    }
}
