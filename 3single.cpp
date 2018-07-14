// SINGLE INHERITANCE EXAMPLE (Public)
#include<iostream>
using namespace std;
class A
{
	int m;
	public:
		int n;
		A()
		{
			m=5;
			n=10;
		}
		void displaym()
		{
			cout<<"\nm : "<<m;
		}

};
class B: public A
{
	public:
		void displayn()
		{
			cout<<"n:"<<n<<"\n";

		}
};

int main()
{
	
	B b1;
	b1.n = 200;
	b1.displaym();
	b1.displayn();
	return 0;
}







