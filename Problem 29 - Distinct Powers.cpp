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

int main() {

    vector<set<int>> DistinctPowers(101);
    vector<bool> IsNthPower(101, false);
    for (int i = 2; i <= 100; ++i) {
        if (IsNthPower[i]) continue;
        int PowerOfi = 1;
        while (power(i, PowerOfi) <= 100) {
            IsNthPower[power(i, PowerOfi)] = true;
            for (int j = 2; j <= 100; ++j) {
                DistinctPowers[i].insert(i * j * PowerOfi);
            }
            PowerOfi++;
        }
    }

    int DistinctTerms = 0;
    for (int i = 2;  i <= 100; ++i) {
        DistinctTerms += DistinctPowers[i].size();
    }

    cout << DistinctTerms << '\n';
} 


