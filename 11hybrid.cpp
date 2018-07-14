// HYBRID INHERITANCE EXAMPLE (Public)
#include<iostream>
using namespace std;
class A
{
	public:
	int m;
};
class B: public A
{
	public:
	void displaym()
		{	
			m = 10;
			cout<<"m:"<<m<<"\n";
		}
};
class C
{
	public:
		int n;
		void displayn()
		{	
			n = 20;
			cout<<"n:"<<n<<"\n";
		}
};
class D: public B, public C
{
	public:
};
int main()
{
	D d1;
	d1.displaym();
	d1.displayn();
	return 0;
}
