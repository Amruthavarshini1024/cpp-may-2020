#include<iostream>
using namespace std;

int main()
{ 
	int arr[5];
  int *p; //pointer variable
  p=arr;  // use p to store base address of arr
	cout<<"Enter elements:"; 
	int i;
	for(i=0;i<5;i++)
	{ cin>>arr[i];}
	cout<<endl; 
  
 	cout<<"You entered:";
	for(i=0;i<5;i++) 
	{ cout<<*p<<endl; p++;}  // access array elements using pointers
	return 0;
}
