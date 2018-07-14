/* CREATE A CLASS COLLEGE WHICH CONSISTS OF COLLEGE ID AND COLLEGE NAME.
CREATE ANOTHER CLASS FY WHICH INHERITS COLLEGE CLASS AND CONSIST OF
INFORMATION OF STUDENTS STUDYING IN FY.
CREATE CLASS SY WHICH INHERITS COLLEGE CLASS AND CONSISIT OF INFORMATION
OF STUDENTS STUDYING IN SY.
CREATE CLASS TY WHICH INHERITS COLLEGE CLASS AND CONSISIT OF INFORMATION
OF STUDENTS STUDYING IN TY.
THE USER SHOULD ASK THE STUDENT IN WHICH YEAR HE WANTS TO TAKE ADMISSION.
IN THE END, FIND THE TOTAL NUMBER OF STUDENTS IN EACH YEAR.
USE THE CONCEPT OF NEW AND DELETE OPERATORS.
*/

#include<iostream>
using namespace std;

class college
{
	int cid;
	char cname[20];
	public:
		void getcollege()
		{
			cout<<endl<<"Enter college id :";
			cin>>cid;
			cout<<endl<<"Enter college name :";
			cin>>cname;
		}
		void dispcollege()
		{
			cout<<endl<<"College id :"<<cid;
			cout<<endl<<"College name :"<<cname;
		}
};

class FY : public college
{
	int rno;
	char name[20];
	public:
		static int fycount;
		void getFY()
		{
			cout<<endl<<"Enter rno";
			cin>>rno;
			cout<<endl<<"Enter name :";
			cin>>name;
			fycount++;
		}
		void dispFY()
		{
			cout<<endl<<"Roll No :"<<rno;
			cout<<endl<<"Student name :"<<name;
		}
};

int FY::fycount=0;


class SY : public college
{
	int rno;
	char name[20];
	public:
		static int sycount;
		void getSY()
		{
			cout<<endl<<"Enter rno";
			cin>>rno;
			cout<<endl<<"Enter name :";
			cin>>name;
			sycount++;
		}
		void dispSY()
		{
			cout<<endl<<"Roll No :"<<rno;
			cout<<endl<<"Student name :"<<name;
		}
};

int SY::sycount=0;


class TY : public college
{
	int rno;
	char name[20];
	public:
		static int tycount;
		void getTY()
		{
			cout<<endl<<"Enter rno";
			cin>>rno;
			cout<<endl<<"Enter name :";
			cin>>name;
			tycount++;
		}
		void dispTY()
		{
			cout<<endl<<"Roll No :"<<rno;
			cout<<endl<<"Student name :"<<name;
		}
};

int TY::tycount=0;

int main()
{
	int choice;
	char ch;
	do
	{
		cout<<endl<<"Menu...";
		cout<<endl<<"1. FY";
		cout<<endl<<"2. SY";
		cout<<endl<<"3. TY";
		cout<<endl<<"Enter your choice..: ";
		cin>>choice;

		switch(choice)
		{
			case 1:
				{
					FY *f=new FY;
					f->getcollege();
					f->getFY();
					cout<<endl<<"Total students till now...:"<<FY::fycount;
					f->dispcollege();
					f->dispFY();
					break;
				}
			case 2:
				{
					SY *s=new SY;
					s->getcollege();
					s->getSY();
					cout<<endl<<"Total students till now...:"<<SY::sycount;
					s->dispcollege();
					s->dispSY();
					break;
				}
			case 3:
				{
					TY *t=new TY;
					t->getcollege();
					t->getTY();
					cout<<endl<<"Total students till now...:"<<TY::tycount;
					t->dispcollege();
					t->dispTY();
					break;
				}
			default:
				break;
		}
		cout<<endl<<"Do you wish to continue..(Y / N):";
		cin>>ch;
	}while(ch=='Y' || ch=='y');

	cout<<endl<<"Total students till now...";
	cout<<endl<<"FY :"<<FY::fycount;
	cout<<endl<<"SY :"<<SY::sycount;
	cout<<endl<<"TY :"<<TY::tycount;

	return 0;
}