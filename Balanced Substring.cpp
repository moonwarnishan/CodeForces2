#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
  cin>>t;
  while (t--)
    {
        int n,i,j;
        cin>>n ;
        string s;
        cin>>s ;
        vector<int>V;
        char a[n][n];
        int cnt = 0;
        for(int i=0;i<n;i++) {
            cnt+=(s[i]=='2');
            if(s[i]=='2') {
                V.push_back(i);
            }
        }
        if(cnt<=2 && cnt) {
            cout << "NO"<<endl;
        }
        else {
            cout << "YES"<<endl;
            for(i=0;i<s.size();i++) {
                if(s[i]=='1') {
                    for(j=0;j<n;j++) {
                        a[i][j]='+';
                        a[j][i]='-';
                    }
                }
            }
            int len=V.size();
            for(i=0;i<len;i++) {
                for(j=0;j<len;j++) {
                    if(i==j){continue;}
                    if(a[V[i]][V[j]]=='.') {
                        a[V[i]][V[j]] ='=';
                        a[V[i]][V[j]] = '=';
                    }
                }
                if(i==len-1) {
                    a[V[i]][V[0]]='+';
                    a[V[0]][V[i]]='-';
                }
                else{
                    a[V[i]][V[i+1]]='+';
                    a[V[i+1]][V[i]]='-';
                }
            }
            for(i=0;i<n;i++) {
                a[i][i]='X';
                for(j=0;j<n;j++) {
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        }
    }
}
