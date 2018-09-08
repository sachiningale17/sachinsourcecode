#include<iostream>
using namespace std;

class number
{
	int x,y
	public:
		void accept()
		{
			cout<<"Enter value of x:";
			cin>>x;
			cout<<"Enter value of y:";
			cin>>y;
		}
		void display()
		{	
			cout<<"value of x::"<<x;
			cout<<"value of y::"<<y;
		}
int main()
{
number n;	
n.accept();
n.display();
return 0;
}

