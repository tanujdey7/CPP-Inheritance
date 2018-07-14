// VIRTUAL DESTRUCTOR

#include <iostream>
using namespace std;

class base
{
public:
	base()
	{
		  cout<<"\n base's constructor";
	}

	virtual ~base()
	{
		  cout<<"\n base's destructor";
	}
};

class derived : public base
{
   public:
	   derived()
	  {
		  cout<<"\n derived's constructor";
	   }

	   ~derived()
	  {
		  cout<<"\n derived's destructor";
	   }
};

int main()
{

   base *ptr = new derived();

   delete ptr;
	return 0;
}

//OUTPUT
// base's  constructor
// derived constructor
// derived destructor
// base destructor
