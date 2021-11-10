#include<bits/stdc++.h>
using namespace std;
int rec(int n,int m)
{
    if(n==1 || m==1)
    {
        return 1;
    }
    else
        return rec(n-1,m)+rec(n,m-1);
}


int main()
{
    int n;
    cin>>n;
    cout<<rec(n,n)<<endl;

}
