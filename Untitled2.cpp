#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
	int i,j;
	cout<<"enter the number";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pattern(n);
	return 0;
}