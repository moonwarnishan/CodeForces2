#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    if((n-2)%3!=0)
    {
        cout<<1<<" "<<1<<" "<<n-2<<endl;
    }
    else
        cout<<1<<" "<<2<<" "<<n-3<<endl;
}
