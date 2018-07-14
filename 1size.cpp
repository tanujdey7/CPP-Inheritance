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
};

int main()
{
	A a1;
	B b1;
	cout<<"Size of A"<<sizeof(a1);//4
	cout<<"Size of B"<<endl<<sizeof(b1);//8
	
	return 0;
}
