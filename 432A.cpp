#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,cnt=0;
    cin>>n>>k;
    vector<int>v(n);
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
        if(5-v[i]>=k)
        {
            cnt++;
        }
    }
    cout<<cnt/3<<endl;

}