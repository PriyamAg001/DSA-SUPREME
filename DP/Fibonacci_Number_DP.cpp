#include <iostream>
#include <vector>
using namespace std;

// Approach: Top Down: Recursion + Memoization
int fibonacci(int n, vector<int>& dp){
    // Base Case:
    if(n <= 1){
        return n;
    }

    // Step 3:
    if(dp[n] != -1){
        return dp[n];
    }

    // Step 2:
    dp[n] = fibonacci(n-1, dp) + fibonacci(n-2, dp);
    return dp[n];
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;

    // Step 1:
    vector<int> dp(n+1);
    for(int i=0; i<=n; i++){
        dp[i] = -1;
    }

    cout << "Fibonacci Series: " << fibonacci(n, dp);
}