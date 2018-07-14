// HIERARCHICAL INHERITANCE EXAMPLE (Public)
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
	void display()
		{	
			m = 10;
			cout<<"m:"<<m<<"\n";
		}
};
class C: public A
{
	public:
		void display()
		{	
			m = 20;
			cout<<"m:"<<m<<"\n";
		}
};
int main()
{
	B b1;
	b1.display();
	C c1;
	c1.display();
	return 0;
}