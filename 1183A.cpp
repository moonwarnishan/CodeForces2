#include<bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;


    int result = 0;
    while (a > 0) {
        result += a % 10;
        a /= 10;
    }

    while (result % 4 != 0) {
        a++;
    }
    cout << a << endl;
}
