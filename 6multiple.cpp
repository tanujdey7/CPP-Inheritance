/* CREATE A CLASS PRODUCT WHICH CONSIST OF PRODUCT ID, PRODUCT NAME, PRICE
AND ANOTHER CLASS CUSTOMER WHICH CONSIST OF CUSTOMER INFORMATION LIKE
CUSTOMER ID AND CUSTOMER NAME.
CREATE A CLASS ORDER WHICH WILL GENERATE A INVOICE FOR THE CUSTOMER.
A CUSTOMER CAN PURCHASE MULTIPLE PRODUCTS.
AMOUNT = PRICE * QUANTITY
AND TOTAL AMOUNT = SUM OF ALL THE AMOUNT(FOR EACH PRODUCT)
*/

#include<iostream>
using namespace std;

class product
{
	int pid;
	char pname[20];
	int price,qty;
	int amt;
	public:
		void getproduct()
		{
			cout<<endl<<"Enter product id :";
			cin>>pid;
			cout<<endl<<"Enter product name :";
			cin>>pname;
			cout<<endl<<"Enter product price :";
			cin>>price;
			cout<<endl<<"Enter product quantity :";
			cin>>qty;
		}
		void dispproduct()
		{
			cout<<endl<<"Product id :"<<pid;
			cout<<endl<<"Product name :"<<pname;
			cout<<endl<<"Product price :"<<price;
			cout<<endl<<"Product quantity :"<<qty;
			cout<<endl<<"Product amount :"<<amt;
		}
		void calcproduct()
		{
			amt = price * qty;
		}
		int returnamt()
		{
			return amt;
		}
};

class customer
{
	int cid;
	char cname[20];
	public:
		void getcustomer()
		{
			cout<<endl<<"Enter customer id:";
			cin>>cid;
			cout<<endl<<"Enter customer name :";
			cin>>cname;
		}
		void dispcustomer()
		{
			cout<<endl<<"Customer id :"<<cid;
			cout<<endl<<"Customer name :"<<cname;
		}
};

class invoice : public product, public customer
{
	int tamt;
	public:
		invoice()
		{
			tamt = 0;
		}
		void calctamt(product p)
		{
			tamt = tamt + p.returnamt();
		}
		void dispamt()
		{
			cout<<endl<<"Total amount :"<<tamt;
		}

};

int main()
{
	
	invoice in;
	int n,i;
	cout<<endl<<"Enter the number of products :";
	cin>>n;

	in.getcustomer();
	product *p = new product[n];

	for(i=0;i<n;i++)
	{
		p[i].getproduct();
		p[i].calcproduct();
	}

	cout<<endl<<endl<<"Bill...";

	in.dispcustomer();

	for(i=0;i<n;i++)
	{
		p[i].dispproduct();
		in.calctamt(p[i]);
	}

	in.dispamt();

	return 0;
}