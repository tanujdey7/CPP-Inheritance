//Pointers to derived object
#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<endl<<"A class..";
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<endl<<"B class..";
		}
};
int main()
{
	A a1; //base class
	B b1; // derived class
	B *bp;
	A *as; //derived class
	bp = &b1; //derived class pointer is pointing to 
			//derived class object
	bp->show(); //B class...
	as =&a1;
	as->show();
	//bp = &a1;
	return 0;
}





