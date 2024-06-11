#include <iostream>

using namespace std;
int main(){
    int max = -1;
    for (int i = 0; i < 3; i++){
        int tmp;
        cin >> tmp;
        if (tmp > max)max = tmp;
    }
    cout <<max <<"\n";
    return 0;
}
