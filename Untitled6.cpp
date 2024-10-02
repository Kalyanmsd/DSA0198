#include<iostream>
using namespace std;

class student{
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
	student s;
	s.id=1001;
	s.name="ram";
	s.print();
}