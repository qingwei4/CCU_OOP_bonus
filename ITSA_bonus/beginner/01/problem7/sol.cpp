#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n == 1){
        cout << "    *\n";
        cout << "   * *\n";
        cout << "  *   *\n";
        cout << " *     *\n";
        cout << "*********\n";
    }
    else if (n == 2){
        cout << "    *\n";
        cout << "   ***\n";
        cout << "  *****\n";
        cout << " *******\n";
        cout << "*********\n";
    }
    else if (n == 3){
        cout << "*********\n";
        cout << " *******\n";
        cout << "  *****\n";
        cout << "   ***\n";
        cout << "    *\n";
    }
    return 0;
}
