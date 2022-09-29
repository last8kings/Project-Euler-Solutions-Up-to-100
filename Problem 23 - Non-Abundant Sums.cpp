#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> SumOfDivisors(28124, 0);

    for (int i = 1; i < 28124; ++i) {
        for (int j = i * 2; j < 28124; j += i) {
            SumOfDivisors[j] += i;
        }
    }
    
    vector<int> AbundantNums;
    for (int i = 1; i < 28124; ++i) {
        if (SumOfDivisors[i] > i) AbundantNums.emplace_back(i);
    }
    
    vector<bool> IsSumOfTwoAbundant(28124, false);
    
    
    for (int x : AbundantNums) {
        for (int y : AbundantNums) 
            if (x + y < 28124) IsSumOfTwoAbundant[x + y] = true;
    }
    
    int Sum = 0;
    for (int i = 1; i <= 28123; ++i) if (!IsSumOfTwoAbundant[i]) Sum += i;

    cout << Sum << '\n';
} 
