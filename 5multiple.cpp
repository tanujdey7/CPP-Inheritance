// MULTIPLE INHERITANCE EXAMPLE (Public)
#include<iostream>
using namespace std;
class A
{
	public:
	int m;
	
};
class B
{
	public:
	int n;
	
};
class C: public A, public B
{
	public:
		void display()
		{	
			m = 10;
			n = 20;
			cout<<"m:"<<m<<"\n";
			cout<<"n"<<n<<"\n";
		}
};
int main()
{
	
	C c1;
	c1.display();
	
	return 0;
}







