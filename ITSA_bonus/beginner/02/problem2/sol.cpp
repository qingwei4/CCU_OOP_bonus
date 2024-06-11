#include <bits/stdc++.h>
using namespace std;

int main() {
    double t, b, h; cin >> t >> b >> h;
    cout << "Trapezoid area:";
    cout << fixed << setprecision(1);
    cout << round((t+b)*h/2 * 10.0) / 10.0 << '\n';
}
