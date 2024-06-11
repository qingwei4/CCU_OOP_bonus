#include <bits/stdc++.h>
using namespace std;

int main() {
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int n; cin >> n;
    stack<char> s;
    while (n){
        int tmp = n & 15;
        n >>= 4;
        s.push(hex[tmp]);
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    cout << '\n';
    return 0;
}
