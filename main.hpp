#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
        if ( n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

void getTwoValues( int &begin, int &end) {
    do {
        cout << "Enter 2 integer values: ";
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin) {
    while (true) {
        if (isPrime(++begin))
            return begin;
    }
}

int getPrevPrime(int end) {
    while (true) {
        if(isPrime(--end))
        return end;
    }
}
