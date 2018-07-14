//virtual base class
#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"A...";
		}
};

class B : public A
{};

class C: public A
{};

class D: public B, public C
{};

int main()
{
	D d1;
	d1.show(); //ambiguous error A::show and A::show
	return 0;
}