//Multiple Inheritance - Constructor and Destructor
#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"Constructor A";
	}
	~A()
	{
		cout<<"Destructor A";
	}
};
class B
{
	public:
	B()
	{
		cout<<"Constructor B";
	}
	~B()
	{
		cout<<"Destructor B";
	}
};
class C : public A, public B
{
	public:
	C()
	{
		cout<<"Constructor C";
	}
	~C()
	{
		cout<<"Destructor C";
	}
};
int main()
{
	C c1;
}