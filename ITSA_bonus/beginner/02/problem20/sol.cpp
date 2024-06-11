#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    // Handle edge cases
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Eliminate multiples of 2 and 3
    }

    // Check divisors from 5 to sqrt(n)
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n; cin >> n;
    int o = n;
    while (true){
        if (isPrime(n) && n != o){
            cout << n << '\n';
            break;
        }else n--;
    }
    return 0;
}
