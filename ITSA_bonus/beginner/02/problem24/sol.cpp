#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    while (n--){
        int a, b, s = 0; cin >> a >> b;
        if (a > b)swap(a, b);
        for (int i = a; i <= b; i++){
            s += i;
        }
        cout << s << '\n';
    }
    return 0;
}
