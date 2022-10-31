#include <bits/stdc++.h>
using namespace std;

constexpr  int N = 2e6; //Since we want primes up to 2 million.

bool isPrime[N + 1];
vector<int> primes = {0}; // initializing as 0 for 1 - based indexing purposes

void sieve() {
    for (int i = 2; i <= N; ++i) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= N; j += i) {
                isPrime[j] = false;
            }
            primes.emplace_back(i);
        }
    }
}

int main() {
    primes.reserve(1000000);
    memset(isPrime, true, sizeof(isPrime));
    sieve();
    int64_t SumOfPrimes = 0;
    for (auto x : primes) {
        SumOfPrimes += x;
    }
    cout << SumOfPrimes << '\n';
}
