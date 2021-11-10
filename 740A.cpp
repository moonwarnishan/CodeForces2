#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    int cnt = 1;
    while (!is_sorted(A, A + n)) {
        if (cnt % 2) {
            for (int i = 0; i < n - 1; i++) {
                if (((i + 1) % 2) and A[i] > A[i + 1])
                    swap(A[i], A[i + 1]);
            }
        }
        else {
            for (int i = 0; i < n - 1; i++) {
                if (!((i + 1) % 2) and A[i] > A[i + 1])
                    swap(A[i], A[i + 1]);
            }
        }
        cnt++;
    }
    cout << cnt - 1<< endl;
    }
    return 0;
}