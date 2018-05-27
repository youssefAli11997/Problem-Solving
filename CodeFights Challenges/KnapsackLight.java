//link: https://codefights.com/arcade/intro/level-9/r9azLYp2BDZPyzaG2/
int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW)
{
    int value = 0;
    if((weight1 <= maxW && (value1 > value2 || weight2 > maxW)) || (weight1 + weight2 <= maxW))
    {
        value += value1;
        maxW -= weight1;
    }
    if(weight2 <= maxW)
    {
        value += value2;
        maxW -= weight2;
    }
    return value;
}
