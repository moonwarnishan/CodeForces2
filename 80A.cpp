#include <iostream>

using namespace std;

bool isprime(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int next = n + 1;
    while (!isprime(next))
    {
        next += 1;
    }
    cout << (next == m ? "YES" : "NO") << endl;

    return 0;
}
