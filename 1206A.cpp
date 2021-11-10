#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int m;
    cin>>m;
    long long int b[m];
    for(int j=0;j<m;j++)
    {
       cin>>b[j];
    }
    sort(a,a+n);
    sort(b,b+m);

    cout<<a[n-1]<<" "<<b[m-1]<<endl;
}
