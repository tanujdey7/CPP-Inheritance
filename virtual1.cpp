//Pure Virtual Function
#include<iostream>
using namespace std;

class A
{
	public:
		virtual void test()=0;
};
class B : public A
{
	public:
		void test()
		{
			cout<<"This is testing";
		}
		void disp()
		{
			cout<<"HELOOOOO";
		}
};
int main()
{
	A a1;
	B b1;
	b1.test();
	b1.disp();
}