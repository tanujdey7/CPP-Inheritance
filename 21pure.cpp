//PURE VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class A
{
	public:
		virtual void display()=0; //pure virtual Function Definition
};

class B:public A
{
	public:
		void display()
		{
			cout<<"B...";
		}
};


void main()
{
	A *ap;
	B b1; //cannot create instance of abstract class B
	ap = & b1;
	ap->display();
}
