
#include<iostream>
using namespace std;
void func(int);
int main()
{
int age;
cout<<"Hello!Please enter your age."<<endl;
cin>>age;
cout<<endl;
func(age);
cout<<" Thank you. Have a good day:)";
return 0;

}

void func(int x)
{  if(x>=18)
        {cout<<"Hurray! You're eligible to vote. Please subscribe to ndtv.com for election updates and reminders"<<endl;
        }
   else
   { cout<<"Alas! Looks like you aren't 18 yet. Please wait for the next"<<(18-x)<<"years and apply for your Voter's ID online at eci.gov.in"<<endl;
   }
   
 }
