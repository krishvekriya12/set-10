#include<iostream>
#include<string.h>
using namespace std;

int main()
{

    int a=5,b=1,c;
	try
	{
		if(b==1)
		{
			throw 10;
		}
		else 
		{
			c=a/b;
			cout<<"Divided = "<<c<<endl;
		}
 	}
	catch (...)
	{
		cout<<"cannot divided by one"<<endl;
	}
}
	
