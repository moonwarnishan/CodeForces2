#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;cin>>t;
    vector<int> v;
    for(i=0;i<t;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(i=0;i<t;i+=2)
    {
        ans+= v[i+1]-v[i];
    }
    cout<<ans<<endl;

}
