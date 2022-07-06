#include <bits/stdc++.h>
using namespace std;

constexpr  int N = 1e7;

bool isPrime[N + 1];
vector<int> primes = {0}; // initializing as 0 for 1 - based indexing purposes

void sieve() {
    for (int i = 2; i <= N; ++i) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= N; j += i) {
                isPrime[j] = false;
            }
            primes.push_back(i);
        }
    }
}

int main() {
    primes.reserve(1000000);
    memset(isPrime, true, sizeof(isPrime));
    sieve();
    cout << primes[10001];
}
