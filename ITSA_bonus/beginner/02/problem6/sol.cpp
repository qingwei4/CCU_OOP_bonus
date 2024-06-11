#include <iostream>

using namespace std;
int main(){
    int n; cin >> n;
    while (n--){
        int a, b; cin >> a >> b;
        a+=b;
        cout << a*a <<'\n';
    }
    return 0;
}
