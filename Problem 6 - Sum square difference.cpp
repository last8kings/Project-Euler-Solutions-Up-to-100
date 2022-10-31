#include <bits/stdc++.h>
using namespace std;

/*
Instead of the for loop in my program, this can alternatively be calculated using the formula 
1 ^ 2 + 2 ^ 2 + ... + n ^ 2 = n * (n + 1) * (n + 2) / 6 
for the sum of squares
and 
(1 + 2 + ... + n) ^ 2 = (n * (n + 1) / 2) ^ 2 
for the square of sums
which can both be proved with induction. 
*/
int main() {
   int sumofsquares = 0;
   int squareofsums = 0;
   for (int i = 1; i <= 100; ++i) {
      sumofsquares += i * i;
      squareofsums += i;
   }
   squareofsums *= squareofsums;
   cout << squareofsums - sumofsquares;
   return 0;
} 
