#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) 
        return false;
    if (n == 2 or n == 3) 
        return true;
    if (n % 2 == 0 or n % 3 == 0) 
        return false;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 or n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 73;
    bool flag = isPrime(n);
    if (flag) {
        cout << n << " is a prime number\n";
    } else {
        cout << n << " is not a prime number\n";
    }
    return 0;
}
