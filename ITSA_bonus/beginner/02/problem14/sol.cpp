#include <bits/stdc++.h>
using namespace std;

int main() {
    double speed = 100 - 30 * 2.54;
    double n; cin >> n;
    cout << ceil(n * 100 / speed) << '\n';
    return 0;
}
