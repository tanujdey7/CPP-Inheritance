//Private

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

class B: private A
{
	public:
		void fun1()
		{
			//m = 10; //private
			n = 20;
			o = 30;
			cout<<endl<<n;
			cout<<endl<<o;
		}
};




int main()
{
	

	B b1;
	//b1.o=20;
	b1.fun1();
	
	return 0;
}