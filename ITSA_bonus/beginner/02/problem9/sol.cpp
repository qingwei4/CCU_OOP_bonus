#include <iostream>

using namespace std;
int main(){
    int n; cin >> n;
    while (n--){
        int i; cin >> i;
        if (i>31)cout << "Value of more than 31\n";
        else cout << (1<<i) <<'\n';
    }
    return 0;
}
