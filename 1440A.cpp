#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,c0,c1,h,ans=0;
        cin>>n>>c0>>c1>>h;
        string s;cin>>s;
        for(auto i:s)
        {
            if(i=='0')
            {
                ans+=min(c0,c1+h);
            }
            else
                ans+=min(c1,c0+h);
        }
        cout<<ans<<endl;

    }
}
