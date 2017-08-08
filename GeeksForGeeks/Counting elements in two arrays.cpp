// problem link : http://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1/
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
void countEleLessThanOrEqual(int arr1[], int arr2[], 
                             int m, int n)
{
    sort(arr2, arr2 + n);
    for(int i = 0; i < m; i++)
        cout<<(upper_bound(arr2, arr2 + n, arr1[i]) - arr2)<<" ";
}
