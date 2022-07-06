#include <bits/stdc++.h>
using namespace std;

/*
    UPDATE: this code prob sux and I wrote way too much just to basically brute force it
    Hopefully if I revisit this in like two months I can have new knowledge to fix it up Unless of course this is actaully close to optimal.


    If a + b + c = 1000, then (a + b + c) ^ 2 = 1000000, which can be expanded out
    to a ^ 2 + b ^ 2 + c ^ 2 + 2 * a * b + 2 * a *c + 2 * b * c = 1000000.
    This is now 2 * c^2 + 2 * a * b + 2 * a * c + 2 * b * c and dividing each side by 2 yields
    c^2 + a * b + a * c + b * c = 500000  ---> c^2 + c(a + b) + a * b = 500000
    which means c^2 + c * (1000 - c) + a * b = 500000
    so c * (c + 1000 - c) + a * b = 500000
    so 1000c + a * b = 500000
    Also note that (1000 - c) ^ 2 = (a + b) ^ 2 = a ^ 2 + 2 * a * b + b ^ 2 = c ^ 2 + 2 * a * b
    so c ^ 2 - 2000c + 1000000 = c ^ 2 + 2 * a * b
    so a * b = -1000c + 500000 -----> a * b = -1000 * (c - 500)
    Which gives us the same equation from earlier.
    Since c > b > a, we have some bounds for c as in c cannot be more than 500 or the equation would
    make no sense since a and b are natural numbers. It also cannot be exactly 500 as that would imply a is 0
    and b is 500 which cannot be since b is less than c.
    A rough lower bound of c would be assuming b and a are equal c so 1000c + c ^ 2 = 500000 which when solved via quadratic
    formula yields 366, though in actuality we could make it a bit higher but that is good enough.

  */
int main() {
    for (int c = 366; c < 500; ++c) {
        int res = -1000 * (c - 500); //This is what a * b equals
        int rem = 1000 - c; //This is what a + b equals
        for (int a = rem - c; a < c - 1; ++a) {
            int b = rem - a;
            if (a * b == res) {
                cout << res * c << '\n';
            }
        }
    }
}
