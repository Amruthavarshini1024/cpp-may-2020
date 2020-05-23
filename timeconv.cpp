#include<iostream>
using namespace std;
//class name not set as time since it is a keyword
class timecon{ 
      private : int hour, minute, second;
      public:
               timecon(int hr,int min,int sec){ hour=hr;
                       minute=min;
                       second=sec; }
               void display(){ cout<<"The time is = "<<hour<<":"<<minute<<":"<<second<<endl; }
               void convert(){ int x;
               x= (hour*60*60)+(minute*60)+second;
               cout<<"Time in total seconds is = "<<x<<" seconds"<<endl;
               }
               };
               
int main()
{  
     
     int hr,min,sec;
    cout<<"Enter the time"<<endl;
    cout<<"Hours?"; cin>>hr;
    cout<<"Minutes?"; cin>>min;
    cout<<"Seconds?"; cin>>sec;
    timecon t(hr,min,sec);
    t.display();
    t.convert();
    
    return 0;
}
                
               
               
