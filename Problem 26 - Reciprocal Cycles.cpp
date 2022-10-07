#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int longest_cycle = 0, d = 0;
    for (int i = 1; i < 1000; ++i) {
        
        int cyclelength = 0, x = 1;
        vector<bool> visited(1000, false);
        
        while (visited[x] == false) {
            visited[x] = true;
            if (x == 0) break;
        
            if (x > i) cyclelength++;
            while (x < i) {cyclelength++; x *= 10;}
            x = x % i;
        }

        if (cyclelength > longest_cycle) {
            d = i;
            longest_cycle = cyclelength;
        }

    }
    
    cout << d << '\n';

} 
