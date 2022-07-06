#include <bits/stdc++.h>
using namespace std;
    

int main() {
    int N = 20;
    int factors[21];
    memset(factors, 0, sizeof(factors));

    for (int i = 2; i <= N; ++i) {
        int p = i;
        for (int j = 2; j <= N; ++j) {
            int cnt = 0;
            while (p % j == 0) {
                cnt++;
                p /= j;
            }
            factors[j] = max(cnt, factors[j]);
        }
    }
    int ans = 1;
    for (int i = 2; i <= 20; ++i) {
        ans *= pow(i, factors[i]);
    }

    cout << ans;
} 
