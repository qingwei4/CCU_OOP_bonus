#include <bits/stdc++.h>
using namespace std;

int main() {
    int coins[] = {10, 5, 1};
    int n;
    cin >> n;
    for (auto &i : coins){
        int tmp = n / i;
        n -= i * tmp;
        cout << "NT" << i << "=" << tmp << '\n';
    }
}
