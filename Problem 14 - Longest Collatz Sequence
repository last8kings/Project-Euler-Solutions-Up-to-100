#include <bits/stdc++.h>
using namespace std;

/*
    Most programmy problem so far in my opinion if you know what I mean. Tried optimizing it as much as possible but it still takes ~20 seconds to run so I guess
    I will look to others and check out their code. That is still under the soft one - minute limit but since I came from competitive programming it feels a bit weird.
 */

int main() {
    int MaxChain = 1, TempChain = 0;
    map<long long, bool> Seen;
    map<long long, int> ChainAtNum;
    function<void(long long)> Collatz = [&] (long long num) {
        TempChain++;
        if (ChainAtNum[num]) {TempChain += ChainAtNum[num]; return;}
        Seen[num] = true;
        if(num == 1) {return;}
        else if (num & 1) {
            num += num << 1;
            num++;
        }
        else {
            num >>= 1;
        }
        Collatz(num);
    };
    int ans = 1;
    for (int i = 1; i < 1000000; ++i) {
        if (Seen[i]) {continue;}
        else {
            TempChain = 0;
            Collatz(i);
            ChainAtNum[i] = TempChain;
            if (TempChain > MaxChain) {
                MaxChain = TempChain;
                ans = i;
            }
        }
    }
    cout << ans;
}
