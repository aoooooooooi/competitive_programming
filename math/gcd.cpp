#include <iostream>
#include <cassert>

int gcd(int x, int y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main() {
    assert(gcd(9, 6) == 3);
    assert(gcd(12, 24) == 12);
}