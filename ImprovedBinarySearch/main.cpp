#include <bits/stdc++.h>

#pragma GCC optimize("O3, unroll-loops")
#pragma GCC optimize("avx2")
#pragma GCC optimize("Ofast")

using namespace std;

int main() {
    vector <int> data;
    int num;
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        data.push_back(num);
    }

    sort(data.begin(), data.end());
    cin.clear();
    cin >> num;

    int k = 0, n = data.size();
    for (int b = n/2; b >= 1; b/=2) {
        while (k + b < n && data[k + b] <= num) k += b;
    }
    if (data[k] == num) {
        cout << k << '\n';
    } else {
        cout << -1 << '\n';
    }

    return 0;
}
