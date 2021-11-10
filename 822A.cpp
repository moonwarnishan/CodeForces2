#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,i,x=1;
    cin>>a>>b;
    for(i=1;i<=min(a,b);i++)
    {
        x*=i;
    }

    cout<<x<<endl;
}
