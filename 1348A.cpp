#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long int power[n],sum1=0,sum2=0,sum=0;
        for(i=1;i<=n;i++)
        {
            power[i]=pow(2,i);
        }
        for(i=n-1;i>=(n/2);i--)
        {
            sum1+=power[i];
        }
        for (i = 1; i <=n; i++)
        {
            sum+=power[i];
        }
        sum2=sum-sum1;

        cout<<abs(sum2-sum1)<<endl;
        


    }
}