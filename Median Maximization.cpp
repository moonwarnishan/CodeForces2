#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n,s;
        cin>>n>>s;
        if(n==1)
        {
            cout<<s<<endl;
        }
        else if(s==1)
        {
            cout<<0<<endl;
        }
        else
        {
            int ans;
            if(n%2==0)
            {
                cout<<(int)(s/((n/2)+1))<<endl;
            }
            else
            {
                cout<<(int)(s/(round(n/(2*1.0))))<<endl;
            }
        }

    }
}
