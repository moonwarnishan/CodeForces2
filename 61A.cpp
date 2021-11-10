#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int x=s1.length(),i;
    for(i=0;i<x;i++)
    {
        if(s1[i]==s2[i])
        {
            s2[i]='0';
        }
        else if((s1[i]=='1' && s2[i]=='0')||(s2[i]=='1' && s1[i]=='0'))
        {
            s2[i]='1';
        }
    }
    cout<<s2<<endl;
}