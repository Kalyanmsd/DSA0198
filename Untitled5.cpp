#include<iostream>
using namespace std;
int main()
{
	int f1=0,f2=1,f3;
	int i,n;
	cout<<"enter value for n"<<endl;
	cin>>n;
	cout<<f1<<" "<<f2<<" ";
	for(i=3;i<=n;i++)
	{
		f3=f1+f2;
		cout<<f3<< " ";
		f1=f2;
		f2=f3;	
	}
	 
	return 0;

}