#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;cin>>n;
    long long arr[n];
    long long ans[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i = n-1; i >=0; i--){
        if(i==n-1)
            ans[i] = arr[i];
        else
            ans[i] = arr[i] + arr[i+1];
    }
    for(int i=0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}
