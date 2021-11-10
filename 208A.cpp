#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int i;
    bool x=true;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
        {
            i+=2;
            if(!x)
            {
                cout<<" ";
            }
            continue;
        }
        else
            {
                x=false;
                cout<<s[i];
            }
    }
}
