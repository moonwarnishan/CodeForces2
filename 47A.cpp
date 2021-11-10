#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;cin>>n;
    for(i=1;i<=n;i++)
    {
        if((i*(i+1))/2==n)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
