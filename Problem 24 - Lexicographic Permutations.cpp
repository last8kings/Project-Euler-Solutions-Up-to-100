#include <bits/stdc++.h>
using namespace std;


int main() {
    //set digit to -1 if used
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int PermutationNum = 0, ADD = 362880;
    int64_t MillionthPermutation = 0;

    for (int i = 1; i <= 10; ++i) {
        int cnt = 0, tcnt = 0;
        
        while ((PermutationNum + ADD) < 1000000) {
            PermutationNum += ADD;
            cnt++;
        }

        for (int i = 0; i <= 9; ++i) { 
            if (digits[i] != -1) {
                if (cnt == tcnt) 
                    MillionthPermutation *= 10, MillionthPermutation += digits[i], digits[i] = -1;
                tcnt++;
            }
        }

        if (i != 10) ADD /= (10 - i);
        
    }

    cout << MillionthPermutation << '\n';

} 
