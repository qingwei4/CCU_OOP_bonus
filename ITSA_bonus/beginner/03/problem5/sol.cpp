#include <iostream>

using namespace std;

int main(){
    int n, p; cin >> n;
    p = n * 100;
    if (n >= 100)p *= 0.7;
    else if (n >= 30)p *= 0.8;
    else if (n >= 10)p *= 0.9;
    cout << p << '\n';
    return 0;
}
