#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long  n; cin>>n;
        long long cnt=0;
        for(long long d = 1; d <= 9; d++){
            long long cur = d;
            for(long long rep = 1; rep <= 10; rep++){
                if(cur <= n)
                    {
                        cnt++;;
                    }
                cur = 10 * cur + d;
            }
        }

       cout<<cnt<<endl;
    }
}
