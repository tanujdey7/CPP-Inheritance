// SINGLE INHERITANCE EXAMPLE (Public)
#include<iostream>
using namespace std;
class A
{
	public:
	int m;
};
class B: public A
{
	public:
	void display123()
		{	
			m = 10;
			cout<<"m:"<<m<<"\n";
		}
};
int main()
{
	B b1;
	b1.m = 200;
	cout<<b1.m<<"\n";
	b1.display123();
	return 0;
}
