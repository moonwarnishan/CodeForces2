#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n,int l)
{
    int left=0,right=n-1;

    while(left<=right)
    {
        int mid=(left+right)/2;

        if(l==arr[mid])
        {
            return mid;
        }
        if(arr[mid]<l)
        {
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return -1;

}


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    cout<<BinarySearch(arr, 20,-10)<<endl;


}
