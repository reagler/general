#include <iostream>
using namespace std;
class Base
{
public :
	int a1;
	virtual void f(){
	     cout<<(int*)this<<endl;
	     cout<<a1<<endl;
	    // cout<<"ff"<<endl;    
	    //  g(3);
	    //   a1=1;
	}
	void g(int b)
	{
		b=4;
		a1=123;
		cout<<"asdf"<<endl;
	}
};

typedef void(*fun)(Base *) ;

int main()
{ 
	Base a;
	a.a1=123;
	cout<<a.a1<<endl;
	cout<<(int*)&a<<endl;
	cout<<(int*)*(int *)(&a)<<endl;
	cout<<*((int *)(&a))<<endl;
	fun b=(fun)*(int*)*((int *)(&a));
	cout<<(int*)&a<<endl;
	b(&a);
	return 0;
} 