#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<bool> IsPrime(1000001, true);
    for (int i = 2; i <= 1000000; ++i) {
        if (IsPrime[i]) {
            for (int j = 2 * i; j <= 1000000; j += i) {
                IsPrime[j] = false;
            }
        }
    }

    int Mxa, Mxb, MaxConsecPrimes = 0;
     for (int a = -999; a <= 999; ++a) {
        for (int b = -1000; b <= 1000; ++b) {
            int n = 0;
            while ((n * n + a * n + b) > 0 && IsPrime[n * n + a * n + b]) ++n;
            if (n > MaxConsecPrimes) 
                Mxa = a, Mxb = b, MaxConsecPrimes = n;
        }
    }

    cout << Mxa * Mxb << '\n';

} 
