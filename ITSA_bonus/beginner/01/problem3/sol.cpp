#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n){
        cout << n % 10;
        n /= 10;
        if (n) cout << ',';
        else cout << '\n';
    }
    return 0;
}
