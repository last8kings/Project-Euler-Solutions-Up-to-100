#include <bits/stdc++.h>
using namespace std;

int power(int a, int b) {
    int res = 1;
    while (b) {
       
        if (b & 1) res *= a;

        b >>= 1;
        a *= a;
    }

    return res;
}

int SumOfDigits(int n, int PowerOfDigit) {
    int sum = 0;
    
    while (n) {
        sum += power(n % 10, PowerOfDigit);
        n /= 10; 
    }

    return sum;
}

int main() {
    int SumOfValidNums = 0; 
    for (int i = 10; i <= 354294; ++i) {
        if (SumOfDigits(i, 5) == i) SumOfValidNums += i;
    }

    cout << SumOfValidNums << '\n';
} 


