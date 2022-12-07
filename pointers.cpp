#include<iostream>
using namespace std;
int main()
{
	int v=5;
	int *ip;
	double *dp;
	float *fp;
	char *ch;
	
	ip=&v;
	

	cout<<"value  "  <<v <<endl;
	cout<<"Address in pointer  "<<ip <<endl;
	cout<<"pointer pointing to value "<<*ip <<endl;
	
	*ip =6;
	cout<<endl;
	cout<<"value  "  <<v <<endl;
	cout<<"Address in pointer  "<<ip <<endl;
	cout<<"pointer pointing to value "<<*ip <<endl;

	
	return 0;
	 
}
