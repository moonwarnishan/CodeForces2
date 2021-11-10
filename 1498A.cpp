#include <bits/stdc++.h>
using namespace std;

long long int sum(long long int num) {
long long int tmp = num, DSum = 0;

    while (tmp > 0) {
        DSum += tmp % 10;
        tmp /= 10;
    }

    long long int gcd = __gcd(num, DSum);
    return gcd;
}

int main(void) {
int t;
cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        if (sum(n) != 1) {
            cout << n << endl;
        } else if (sum(n + 1) != 1) {
            cout << n + 1 << endl;
        } else if (sum(n + 2) != 1) {
            cout << n + 2 << endl;
        }
    }
    return 0;
}
