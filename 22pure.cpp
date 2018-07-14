//PURE VIRTUAL FUNCTION

#include<iostream>
using namespace std;

class A
{
public:
virtual void example()=0; //Denotes pure virtual Function Definition
};

class B:public A
{
	public:
void example()
{
cout<<"Hi";
}
};

class C:public B
{
public:
void example()
{
cout<<"SYBCA";
}
};

int main()
{
	B b1;
	b1.example();
	C c1;
	c1.example();
	return 0;
}

//OUTPUT
// HELLO SYBCA