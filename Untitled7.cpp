#include<iostream>
using namespace std;

class car{
    public:
	int id;
	string name;
	void print()
	{
		cout<<"Name "<<name;
		cout<<"ID   "<<id;
		}	
};
int main()
{
	car c;
	c.id=675;
	c.name="bench";
	c.print();
}