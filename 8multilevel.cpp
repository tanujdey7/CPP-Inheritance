
// MULTILEVEL INHERITANCE

/* CREATE A CLASS EMPLOYEE_PERSONAL WHICH CONTAINS EMPLOYEE ID, EMPLOYEE NAME AND
   ADDRESS.
   ANOTHER CLASS EMPLOYEE_OFFICE WHICH INHERITES EMPLOYEE_PERSONAL CONTAINS
   HIS SALARY, DA, BASIC AND PF.
   A CLASS EMPLOYEE_SALARY WHICH GENERATES THE SALARY SLIP OF THE EMPLOYEE.
   SALARY = BASIC + DA - PF
   CREATE APPROPRIATE MEMBER FUNCTIONS IN EACH CLASS.
*/

#include<iostream>
using namespace std;

class Employee_Personal
{
	int id;
	char name[10];
	char address[20];

	public:
	void getpersonal()
	{
		cout<<"Enter id : ";
		cin>>id;
		cout<<endl<<"Enter name : ";
		cin>>name;
		cout<<endl<<"Enter address : ";
		cin>>address;
	}
	void showpersonal()
	{
		cout<<endl<<id<<endl<<name<<endl<<address;
	}
};

class Employee_Office : public Employee_Personal
{
	int pf;
	int da;
	int basic;
	public:
//		int salary;
		void getoffice()
		{
			cout<<endl<<"Enter basic : ";
			cin>>basic;
			cout<<endl<<"Enter da : ";
			cin>>da;
			cout<<endl<<"Enter pf : ";
			cin>>pf;
		}
		void showoffice()
		{
			cout<<endl<<basic<<endl<<da<<endl<<pf;
		}
		int getpf()
		{
			return pf;
		}
		int getda()
		{
			return da;
		}
		int getbasic()
		{
			return basic;
		}
};

class Employee_Salary : public Employee_Office
{
	int salary;
	public:
		void calc()
		{
			salary = getbasic() + getda() - getpf();
			cout<<endl<<salary;

		}
};

int main()
{
	Employee_Salary e;
	
	e.getpersonal();
	e.getoffice();
	e.showpersonal();
	e.showoffice();
	e.calc();

	return 0;

};
