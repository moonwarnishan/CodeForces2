#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s ;
    int ans=0,n;
    int i,j,k;
    cin>>s;
    n= s.size();

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            for(k=j+1;k<n;k++)
                if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                    ans++;

   cout<<ans<<endl;
}
