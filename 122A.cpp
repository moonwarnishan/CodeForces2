#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    bool flag=false;
    for(int i=0;i<14;i++)
    {
        if(n%arr[i]==0)
        {
            flag=true;
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
