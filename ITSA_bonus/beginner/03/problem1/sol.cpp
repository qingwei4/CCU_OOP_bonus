#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    if (n == 0)cout << "0\n";
    else if (n > 0)cout << "正數\n";
    else cout << "負數\n";
    return 0;
}
