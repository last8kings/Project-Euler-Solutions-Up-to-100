#include <bits/stdc++.h>
using namespace std;

int main() {

    int sum = 1, num = 1;
    for (int i = 1; i <= 500; ++i) {
        for (int j = 1; j <= 4; ++j) {
            num += i * 2 ;
            sum += num;
        }
    }

    cout << sum << '\n';
} 
