#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int i,n,k;
    cin>>n>>k;
    vector<int>v(1);
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            v.push_back(i);
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            v.push_back(i);
        }
        if(i==k)
        {
           cout<<v[i]<<endl;
           break;
        }
    } */

    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }

}

