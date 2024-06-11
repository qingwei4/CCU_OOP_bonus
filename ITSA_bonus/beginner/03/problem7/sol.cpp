#include <iostream>

using namespace std;

int main(){
    int n, max = -10000;
    cin >> n;
    while (n--){
        int tmp; cin >> tmp;
        if (tmp > max)max = tmp;
    }
    cout << max << "\n";
    return 0;
}
