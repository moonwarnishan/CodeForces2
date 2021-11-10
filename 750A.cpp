#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,sum=0;
    cin>>n>>k;
    int x=240-k;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(i*5);
        if(sum<=x)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
} 