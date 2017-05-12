#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c1=0,c2=0,x;
	cin>>x;
	while(x--){
		c1=0;c2=0;
		cin>>a>>b;
		for(int i=0;i<=a*3;i++){
			c1++;
			for(int j=0;j<=b*3;j++){
				c2++;
				if(i%3==0 ||j%3==0)
					cout<<"*";
				else
					cout<<".";
			}
			cout<<"\n";
		}
	}

}