#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int a,b,k;
        cin>>a>>b>>k;
        int mid=k/2;
        if(k%2==0)
        {
            cout<<(mid*a)-(mid*b)<<endl;
        }
        else
            cout<<((mid*a)-(mid*b))+a<<endl;

    }
}
