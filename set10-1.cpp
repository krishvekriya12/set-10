#include<iostream>
#include<string.h>
using namespace std;

class car;
class garage{
	public :
		garage(int arg)
		{
			try
			{
				throw arg;
			}
			catch(int arg)
			{
				cout<<arg<<"handeled..."<<endl;
			}
		}
};
class car{
	public :
		car(int n)
		{
			garage g1(n);
		}
};
class motor{
	public :
		motor()
		{
			throw car(60);
		}
};
int main()
{
	try
	{
		motor m1;
	}
	catch(...)
	{
		cout<<"----the end----";
	}
	return 0;
}