#include<bits/stdc++.h>
using namespace std;

int s[1000020];
void shu()
{
    memset(s,0,sizeof(s));
    s[0]=s[1]=1;
    for(int i=2;i<=1000000;i++)
    if(!s[i])
    {
        for(int j=i+i;j<=1000000;j+=i)
            s[j]=1;
    }
}

int main()
{
   int  n;
   long long x;
   cin>>n;
   shu();
   while(n--)
   {
       cin>>x;
       if(x==1)
       {
           cout<<"NO"<<endl;continue;
       }
       long long q=(long long)sqrt((double)x);
       if(q*q==x||(q+1)*(q+1)==x||(q-1)*(q-1)==x)
       {
           if((q+1)*(q+1)==x) q++;
           else
           if((q-1)*(q-1)==x) q--;
           if(s[q]==0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
        else cout<<"NO"<<endl;
   }
    return 0;
}
