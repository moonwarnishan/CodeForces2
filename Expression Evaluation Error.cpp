#include<bits/stdc++.h>
using namespace std;

bool SquareCheck(long long value)
{

    if (value>-1) {

        long long square = sqrt(value);
        return (square * square == value);
    }
    return false;
}

int main()
{
    long long int t;
    cin >>t;
    while(t--){
        long long int n;
        cin >>n;
        if(n<10){
        cout << n-1<<endl;
            }
        else if(SquareCheck(n)==true){
            cout << sqrt(n)-1<<endl;
            }
        else if
            (n%2 == 0){
        cout << ceil(sqrt(n))<<endl;
        }
        else{
        cout <<floor(sqrt(n))<<endl;
    }
}
}
