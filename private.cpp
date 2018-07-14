#include <iostream>
using namespace std;
class base
{
   int i, j;
   public:
       void setij(int a, int b)
       {
          i = a;
          j = b;
       }

       void showij()
       {
          cout <<"\nI:"<<i<<"\n J:"<<j;
       }
};

class derived : private base
{
   int k;
   public:
       void setk()
       {
          //setij();
          k = i + j;
       }
       void showall()
       {
          cout <<"\nK:"<<k;
       }
};

int main()
{
   derived ob;
    //ob.setij(); // not allowed. Setij() is private member of derived
   ob.setk(); //ok setk() is public member of derived
   //ob.showij(); // not allowed. Showij() is private member of derived
   ob.showall(); // ok showall() is public member of derived
   return 0;
}