#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int sz=s.size();
        int n = 0;
        bool m=false;
        for(int i=0;i<sz;i++){
             if (s[i] == '1' && m == true)
             {
                n++;
                m=false;
             }
         else if (s[i] == '0') {
            m=true;
         }
      }
      if (s [sz-1] == '0')
      {
          n++;
      }
      cout<<min(n,2)<<endl;
   }
}

