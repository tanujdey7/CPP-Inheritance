//virtual base class
#include<iostream>
using namespace std;

class A
{
	public:
		void show()
		{
			cout<<"Tanuj";
		}
};

class B :virtual  public A
{};
class C: virtual public A
{};
class D:  public B, public C
{};
int main()
{
	D d1;
	d1.show();
	return 0;
}
