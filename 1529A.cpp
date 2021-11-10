#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,j=0,s=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
       sort(a,a+n);
       int i=0;
       while(n>i && a[i]==a[0]){
        i++;
       }
       cout<<n-i<<endl;

    }
}
