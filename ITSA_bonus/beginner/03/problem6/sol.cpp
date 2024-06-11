#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    while (n--){
        int x; cin >> x;
        if (x >= 50 && x <= 70)cout << x << '\n';
        else cout << "100\n";
    }
    return 0;
}
