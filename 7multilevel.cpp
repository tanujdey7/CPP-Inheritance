// MULTILEVEL INHERITANCE EXAMPLE (Public)
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
	int n;
	void displaym()
		{	
			m = 10;
			cout<<"m:"<<m<<"\n";
		}
};
class C: public B
{
	public:
		void displayn()
		{	
			m = 100;
			n = 20;
			cout<<"m:"<<m<<"\n";
			cout<<"n:"<<n<<"\n";
		}
};

int main()
{
	
	C c1;
	c1.displaym();
	c1.displayn();
	
	return 0;
}