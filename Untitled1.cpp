#include<bits/stdc++.h>
using namespace std;
class book{
	public:
	string name;
	string author;
	int publication;
	void print()
	{
		cout<<"name"<<name;
		cout<<"author"<<author;
		cout<<"publication"<<publication;
		
	}
};
int main(){
	book b;
	b.name="sai charan love story";
	b.author="charan";
	b.publication=2002;
	b.print();
}