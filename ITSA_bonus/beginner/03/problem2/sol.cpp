#include <iostream>

using namespace std;

int main(){
    char ch; cin >> ch;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
        cout << "母音\n";
    }else cout << "子音\n";
    return 0;
}
