#include <bits/stdc++.h>
using namespace std;

int main() {
    double num = pow(2, 1000);
    int sum = 0;
    string s = to_string(num);
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '.') break;
        else {
            sum += (s[i] - '0');
        }
    }
    cout << sum << '\n';
}
