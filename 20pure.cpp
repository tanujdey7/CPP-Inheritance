//PURE VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class A
{
	public:
		virtual void display()=0; //pure virtual function Definition
};

class B:public A
{
	public:
		//virtual void display()=0;
		void display()
		{
			cout<<"B...";
		}
};

int main()
{
	A *ap;
	//A a1;
	B b1;
	ap = & b1;
	ap->display();
	return 0;
}
