#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	string str;
	cin>>a;
	while(a--){
		cin>>str;
		cout<<str[0];
		for(int i=1;i<str.size()/2;i++){
			if(i%2==0)
				cout<<str[i];
			
		}
		cout<<"\n";
	}
	// your code here

	return 0;
}