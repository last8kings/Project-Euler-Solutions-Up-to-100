#include <bits/stdc++.h>
using namespace std;

/*
    Lol tried solving it by hand with my limited combinatorics knowledge for like 3 minutes before realizing that 
    I was getting nowhere so I just did dynamic programming.
 */

int main() {
    vector<vector<long long>> dp(22, vector<long long>(22, 0));
    dp[1][1] = 1;
    for (int i = 1; i <= 21; ++i) {
        for (int j = 1; j <= 21; ++j) {
            dp[i][j] += dp[i -1][j] + dp[i][j - 1];
        }
    }
    for (int i = 1; i <= 21; ++i) {
        for (int j = 1; j <= 21; ++j) {
            cout << dp[i][j] << " ";
        }
        cout << '\n';
    }
    cout << dp[21][21];
}
