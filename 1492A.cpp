#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0){
            cout<<0<<endl;
        }
        else{
            long long int ans=min({a - p%a, b - p%b, c - p%c});
            cout<<ans<<endl;
        }

    }
}
