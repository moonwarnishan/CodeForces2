#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long sz=s.size();
    bool check=0;
    long long ans=0;
    for(int i=1;i<sz;i++){
        if(check && s[i]=='x')
            ans++;
        if(s[i-1]=='x' && s[i]=='x')
            check =1;
        if(s[i]!='x')
            check =0;
    }
    cout<<ans<<endl;
}
