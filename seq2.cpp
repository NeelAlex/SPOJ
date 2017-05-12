#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j;
	cin>>n;
	vector<int>a(n);
	for(i=0;i<n;i++)
		cin>>a[i];

	cin>>m;
	vector<int>b(m);
	for(j=0;j<m;j++)
		cin>>b[j];

	i=0;j=0;
	while(i<n && j<m){
		if(a[i]<a[j])
			j++;
		else{
		if(a[i]!=a[j])
			cout<<a[i]<<" ";
	}
	}
	

}