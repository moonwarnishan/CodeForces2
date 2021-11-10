#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt=0;
    cin>>n;
    string s;
    cin>>s;

    bool arr[26];
     transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(i=97;i<=122;i++)
    {
        arr[i]=false;
    }
    for(i=0;i<n;i++)
    {
        for(int j=97;j<=122;j++)
        {
            if((int)s[i]==j)
            {
               arr[j]=true;
            }
        }
    }
    for(i=97;i<=122;i++)
    {
       if(arr[i]==false)
        {
           cnt++;
        }

    }
    if(cnt>0)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
