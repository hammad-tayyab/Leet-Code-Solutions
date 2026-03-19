
class Solution {
public:
    int solve(int n, vector<int>& memo) //fucniton hadnling the recursion call
    {
        if(n ==0 || n== 1) //base case 
        {
            return 1;
        }
        if (memo[n] != -1) //checking if the value at a given index is memoized in the memo array
        {
            return memo[n];
        }
        memo[n] = solve(n-1,memo) + solve(n-2,memo); //recursion call and storing it in the memo[n]
        return memo[n]; //returning the result
    }
    int climbStairs(int n) //required fucntion
    {
        vector<int> memo(n+1,-1); //declaring a dynamic array of size n+1 and intitialize it to -1
        return solve(n , memo); //calling the fucniton
    }
};