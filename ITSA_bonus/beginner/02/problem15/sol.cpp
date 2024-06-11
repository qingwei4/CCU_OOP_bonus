#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double r = n * 0.9;
    if (n >= 1500)r *= 0.79;
    else if (n >= 800) r*=0.9;
    cout << fixed << setprecision(1);
    cout << round(r*10.0)/10.0 << '\n';
    return 0;
}
