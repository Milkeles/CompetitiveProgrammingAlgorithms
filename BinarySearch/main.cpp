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

    int left = 0, right = data.size() - 1;
    int mid;

    while(left <= right) {
         mid = (right + left) / 2;
         if (data[mid] == num) {
            cout << mid;
            break;
         }
         if (data[mid] > num) {
            right = mid - 1;
         } else {
             left = mid + 1;
         }
    }
    if (left > right) {
        cout << -1 << '\n';
    }
    return 0;
}
