//Pointer to a object
//CLASS EXAMPLE using new for array
#include<iostream>
using namespace std;
class student
{
	int rno;
	char name[10];
	public:
		void getdata()
		{
			cout<<endl<<"Enter rno:";
			cin>>rno;
			cout<<endl<<"Enter name:";
			cin>>name;
		}
		void display()
		{
			cout<<endl<<"Roll no :"<<rno;
			cout<<endl<<"Name :"<<name;
		}
};
int main()
{
	student *s;
	int n,i;
	cout<<"Enter the total number of students :";
	cin>>n;
	s = new student[n];
	for(i=0;i<n;i++)
	{
		s[i].getdata();
	}
	for(i=0;i<n;i++)
	{
		s[i].display();
	}
	return 0;
}
