#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i;
        string s;
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='U')
            {
                s[i]='D';
            }
            else if(s[i]=='D')
            {
                s[i]='U';
            }
        }
        cout<<s<<endl;

    }
}
