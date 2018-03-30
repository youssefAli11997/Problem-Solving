//link: https://codefights.com/arcade/intro/level-7/ZFnQkq9RmMiyE6qtq/
int absoluteValuesSumMinimization(int[] a) {
    int minSum = (int)2e8, xAns = 0;
    
    for(int x : a){
        int sum = 0;
        for(int i=0; i<a.length; i++){
            sum += Math.abs(a[i] - x);
        }
        System.out.println(minSum + " " + x);
        if(minSum > sum){
            minSum = sum;
            xAns = x;
        }
    }
    
    return xAns;
}
