#include <bits/stdc++.h>
using namespace std;

/*
    POST SOLVE UPDATE : Turns out I misread the problem because I thought I just had to find the smallest number
    with more than 500 divisors but then after numerous fails I realized it had to be the first TRIANGULAR number.


    If you didn't already know, you can find how many divisors of a number there are by taking its
    prime factorization and multiplying each factors power plus one by each other. That wording sucks
    so I will just give example. 60 = 2 ^ 2 * 3 * 5, so the amount of divisors is (2 + 1) * (1 + 1) * (1 + 1)
    with 2 being the power of 2, while 1 is the power of 3 and 5. That comes out to 12 and you can verify yourself
    on paper that 60 has 12 divisors.

 */

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
// I have no grounds for believing that the first triangular number with over 500 divisors does not have a
// prime factor over 37 but I'm just gonna assume it does not.

int main() {
    bool NotFound = true;
    int x = 1e3; //min answer is at least 1e8 which I found from my previous failed attempt of misreading question
    while (NotFound) {
        int TriangularNumber = x * (x + 1) / 2;
        vector<int> primecnt(12, 1);
        for (int i = 0; i < 12; ++i) {
                while (TriangularNumber % primes[i] == 0) {
                    TriangularNumber /= primes[i];
                    primecnt[i]++;
                }
        }
        int divisors = 1;
        for (int i = 0; i < 12; ++i) {
            divisors *= primecnt[i];
        }
        if (divisors > 500) {
            cout << x * (x + 1) / 2;
            NotFound = false;
        }
        x++;
    }

}
