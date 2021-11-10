#include<bits/stdc++.h>
using namespace std;
bool EasyOrHard(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int t,arr[999],i;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    if(EasyOrHard(arr,t)==false)
    {
        cout<<"HARD"<<endl;
    }
    else
        cout<<"EASY"<<endl;
}