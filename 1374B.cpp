#include<bits/stdc++.h>
using namespace std;




int main()
{
    int t;cin>>t;
    while(t--)

    {
        int n,cnt1=0,cnt2=0;cin>>n;
        while(n%2==0)
        {
            cnt1++;
            n/=2;
        }
        while(n%3==0)
        {
            cnt2++;
            n/=3;
        }
        if(n==1 && cnt1<=cnt2)
        {
            cout<<2*cnt2-cnt1<<endl;
        }
        else
            cout<<-1<<endl;

    }
}
