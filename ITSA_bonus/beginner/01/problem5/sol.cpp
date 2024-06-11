#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string s;
    cin >> s;
    int l = s.length();
    for (int i = 0; i < l; i++){
        int cnt = s[i] - '0';
        for (int j = 0; j < cnt; j++)cout << '*';
        cout << '\n';
    }
    return 0;
}
