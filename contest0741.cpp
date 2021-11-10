#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
		cin>>t;
		while(t--)
		{	int k;
		cin>>k;
		string n;
		cin>>n;
		int a[k];
		int i,j,l,p;
		for(i=0;i<k;i++){
			a[i]=n[i]-'0';
		}
		for(i=0;i<k;i++){

		if((a[i]%2==0 && a[i]!=2 ) || a[i]==9 ){
				cout<<"1"<<endl;
				cout<<a[i]<<endl;
				break;
				}
				else if(a[i]==1){
						cout<<"1"<<endl;
				cout<<a[i]<<endl;
				break;
				}
		else{
			for(l=i+1;l<k;l++){
			j=a[i]*10+a[l];
			if(j%2==0 || j%3==0 || j%5==0 || j%7==0){
				cout<<"2"<<endl;
				cout<<j<<endl;
				break;
			}
		} break;
	}
		}

		}
	return 0;
}
