#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,t1=0,s=0,k,t2=0;
    cin>>n;
    int a[100];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            t1++;
        }
        else{
            t2++;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(t1>t2)
        {
            if(a[i]%2!=0)
            {
                k=i;
            }
        }
        else{
            if(a[i]%2==0)
               {
                   k=i;
               }
        }
    }
    cout<<k<<endl;

}
