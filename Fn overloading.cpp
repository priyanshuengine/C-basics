#include<iostream>
using namespace std;

int add(int a,int b)
{
	cout<<"Fn1 "<<endl;
	return (a+b);
}
double add(double a,double b)
{
	cout<<"Fn2 "<<endl;
	return(a+b);
}
int add(int a,int b,int c)
{
	cout<<"Fn3 "<<endl;
	return(a+b+c);
}
double add(int a,double b)
{
	cout<<"Fn4 "<<endl;
	return(a+b);
}
double add(double a,int b)
{
	cout<<"Fn5 "<<endl;
	return(a+b);
}
int main()
{
	cout<<add(1,2)<<endl;
	cout<<add(3.5,4.5)<<endl;
	cout<<add(3,4,5)<<endl;
	cout<<add(3,4.5)<<endl;
	cout<<add(3.5,4)<<endl;
	return 0;
}
