// SINGLE INHERITANCE EXAMPLE (Private)

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
			cout<<"m : "<<m<<"\n";
		}

};

class B: private A
{
	public:
		void displayn()
		{
			displaym();
			cout<<"n :"<<n<<"\n";

		}
};

int main()
{
	
	B b1;

//	b1.displaym();  // error as displaym() becomes private
	b1.displayn();
	return 0;
}
