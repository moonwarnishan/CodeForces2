//wrong code

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,j,k,cnt=0;cin>>n;
        int a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n-1;i++)
        {
            if(i%2==0)
            {
                for(i;i<n-2;i+=2)
                {
                    if(a[i]!=a[i+1])
                    {
                        swap(a[i],a[i+1]);
                        cnt++;
                    }
                }
            }
            else
            {
                for(i;i<n-1;i+=2)
                {
                    if(a[i]!=a[i+1])
                    {
                        swap(a[i],a[i+1]);
                        cnt++;
                    }
                }
            }
        }


          cout<<cnt<<endl;

    }
}
