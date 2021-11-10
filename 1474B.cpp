#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int d;
cin>>d;

int x = 1+d;
int ans1= 0;
int ans2 =0;

while(true){
  if(isPrime(x)){
    ans1 = x;
    break;
  }
  x++;
}
x+=d;
while(true){
  if(isPrime(x)){
    ans2 = x;
    break;
  }
  x++;
}

cout<<ans1*ans2<<endl;


    }
}
