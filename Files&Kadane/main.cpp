#include <bits/stdc++.h>

#pragma GCC optimize("O3, unroll-loops")
#pragma GCC optimize("avx2")
#pragma GCC optimize("Ofast")

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int num, best = 0, sum = 0;
    while (cin >> num) {
        sum = max(num, sum+num);
        best = max(best, sum);
    }

    cout << best << '\n';

    return 0;
}
