//Protected
#include<iostream>
using namespace std;
class A
{
	private:
		int m;
	protected:
		int n;
	public:
		int o;
};
class B: protected A
{
	public:
		void fun1()
		{
		      //m = 10; private
			n = 20;
			o = 30;
			cout<<endl<<n;
			cout<<endl<<o;
		}
};
class C:protected B
{
	public:
		void fun2()
		{
		      //m = 10;
			n = 22;
			o = 32;
			cout<<endl<<n;
			cout<<endl<<o;
		}
};
int main()
{
	
	B b1;
	C c1;
	b1.fun1();
	c1.fun2();
	return 0;
}