#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b, cnt=0;
    char c;
    cin >> a >> b;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y') {
                cnt ++;
                break;
            }
        }
    }


    if (cnt>0) {
        cout<<"#Color"<<endl;;
    } 
    else {
        cout<< "#Black&White"<<endl;;
    }
}
