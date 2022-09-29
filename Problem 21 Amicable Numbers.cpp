#include <bits/stdc++.h>
using namespace std;


int main() {

    vector<int> SumOfDivisors(10000, 0);

    for (int i = 1; i < 10000; ++i) {
        for (int j = i * 2; j < 10000; j += i) {
            SumOfDivisors[j] += i;
        }
    }

    int AmicableNumberSum = 0;

    for (int i = 1; i < 10000; ++i) {
        if (SumOfDivisors[i] >= 10000) continue;
        else if (i == SumOfDivisors[SumOfDivisors[i]] && SumOfDivisors[i] != i) AmicableNumberSum += i;
    }

    cout << AmicableNumberSum << '\n';

} 
