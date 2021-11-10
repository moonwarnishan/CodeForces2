#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[9999],a1=0,a2=0,a3=0;
    cin>>n;
    vector<int> v1,v2,v3;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            v1.push_back(i);
            a1++;
        }
        if(a[i]==2)
        {
            v2.push_back(i);
            a2++;
        }
        if(a[i]==3)
        {
            v3.push_back(i);
            a3++;
        }    
    }
    int x=min(min(a1,a2),a3);
    cout<<x<<endl;
    for(i=0;i<x;i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
    }
}