#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long multiples = n / m;
        long long sum = multiples * (multiples + 1) / 2 * m;

        cout << sum << endl;
    }

    return 0;
}
