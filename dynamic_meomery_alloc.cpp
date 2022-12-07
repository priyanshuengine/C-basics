#include<iostream>
using namespace std;
int main(){
	  int size;
	  int *ptr;
	  
	  cout<<"Enter the number of values you want to store"<<endl;
	  cin>>size;
	  
	  ptr=new int[size]; 
	  cout<<"Enter the values you want to store in array"<<endl;
	  for(int i=0;i<size;i++)
	  {
	  	cin>>ptr[i];
	  }
	  cout<<"Values stored in the array are"<<endl;
	  for(int i=0;i<size;i++)
	  {
	  	cout<<ptr[i]<<endl;
	  }
	  return 0;
	  
	  
	    
}
