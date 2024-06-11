#include <bits/stdc++.h>

using namespace std;

int main() {

    cout << fixed << setprecision(1);
    int n; cin >> n;
    while (n--){
        double w, result; cin >> w;
        result = w * w;
        cout << round(result * 10.0) / 10.0 << '\n';
    }
}
