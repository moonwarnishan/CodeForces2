#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        int cnt1=n%2020;
        int cnt2=n/2020;
        if(cnt2>=cnt1)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
}
