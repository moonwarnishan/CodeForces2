#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i;cin>>n;
        int arr[100];
        for(i=1;i<=n;i++)
        {
            arr[i]=i;
        }
       if(n%2==0)
        {
            for(i=1;i<=n;i=i+2)
                {
                    swap(arr[i],arr[i+1]);
                }
        }
        else
        {
            for(i=4;i<=n;i++)
                {
                    swap(arr[i],arr[i++]);
                }
        }

        if(n%2==0)
        {
            for(i=1;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else
        {
            cout<<arr[3]<<" "<<arr[1]<<" "<<arr[2]<<" ";
            for(i=4;i<=n;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;
    }
}
