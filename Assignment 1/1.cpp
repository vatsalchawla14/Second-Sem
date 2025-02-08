#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {

    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    cout << "The next prime number after the entered number " << n << " is " << next << ".\n";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive number.\n";
        return 1;
    }

    if (isPrime(n)) {
        nextPrime(n);
    }
    else {
        cout << endl;
        for (int i = 1;i <= n; i++) {
            if (n % i == 0) cout << i << ' ';
        }
    }

    return 0;
}
