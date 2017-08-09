// problem link : https://codefights.com/arcade/intro/level-7/8PxjMSncp9ApA4DAb/
int depositProfit(int deposit, int rate, int threshold) {
    int years = 0;
    double newDepo = deposit;
    while(newDepo < threshold){
        newDepo += newDepo * rate / 100.0;
        years++;
    }
    return years;
}
