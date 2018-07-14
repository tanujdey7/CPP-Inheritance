#include<iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout<<"Hellloooo Constructor A";
		}
		~A()
		{
			cout<<"Helloooooo Destructor A";
		}
};
class B: public A
{
	public:
		B()
		{
			cout<<"Hellloooo Constructor B";
		}
		~B()
		{
			cout<<"Helloooooo Destructor B";
		}
};
int main()
{
	A *a1 = new B();
	delete a1;
}