//Pointers to derived object

#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<endl<<"A class..";
		}
};

class B:public A
{
	public:
		void show()
		{
			cout<<endl<<"B class..";
		}
};

int main()
{
	A a1;
	B b1;
	A *ap;
	ap = &b1;
	ap->show(); //A class...
	
	return 0;
	
}
