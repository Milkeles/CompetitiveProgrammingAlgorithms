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

    vector<int> arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }

    int best = 0, sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }

    cout << best << '\n';

    return 0;
}
