#include <bits/stdc++.h>
using namespace std;

int main() {
    double w, h; cin >> w >> h;
    h /= 100;
    cout << fixed << setprecision(2);
    cout << round(w/(h*h) * 100.0) / 100.0 << '\n';
}
