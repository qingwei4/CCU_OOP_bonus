#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, r = 0; cin >> a >> b;
    r += b*(a - 120) * 1.66;
    r += 60*b*1.33;
    r +=60*b;
    cout << fixed << setprecision(1);
    cout << round(r*10.0)/10.0 << '\n';
    return 0;
}
