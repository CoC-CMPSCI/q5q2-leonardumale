#include <iostream>
using namespace std;

// checks if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {  // BUG: i <= n 
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter a number greater than 1: ";
    cin >> N;

   int next = N + 1;  // BUG: starts at N, not N+1
    while (!isPrime(next)) {
        next++;
    }

    cout << "Next prime: " << next << endl;
    return 0;
}
