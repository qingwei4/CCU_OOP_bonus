#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char s[20];
    cin >> s;
    if (!strcmp(s, "dog"))cout << "狗\n";
    else if (!strcmp(s, "cat"))cout << "貓\n";
    else if (!strcmp(s, "cow"))cout << "牛\n";
    else if (!strcmp(s, "duck"))cout << "鴨\n";
    else if (!strcmp(s, "fox"))cout << "狐\n";

    else if (!strcmp(s, "狗"))cout << "dog\n";
    else if (!strcmp(s, "貓"))cout << "cat\n";
    else if (!strcmp(s, "牛"))cout << "cow\n";
    else if (!strcmp(s, "鴨"))cout << "duck\n";
    else if (!strcmp(s, "狐"))cout << "fox\n";
}
