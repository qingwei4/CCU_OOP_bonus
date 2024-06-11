#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0; cin >> n;
    for (int i = 1; i <= n; i++){
        if (i % 2 == 0 && i % 3 == 0 && i % 12 != 0){
            s += i;
        }

    }
    cout << s << '\n';
    return 0;
}
