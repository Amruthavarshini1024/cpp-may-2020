#include<iostream>
using namespace std;

int prime(int x);
int main()
{ int n;
 int i;
 cout<<"Enter a positive integer:";
 cin>>n;
 check=0;
 for(i=2;i<=n/2;++i) 
    { if(prime(i)==1) //check if i is prime
        { if(prime(n-i)==1) //check if n-i is prime
             { cout<<"The given integer can expressed as a sum of two prime numbers"<<endl<<n<<"="<<i<<"+"<<n-i<<endl;
               check=1;
             }
        }
    }
   if(check==0) //if i and n-i are not prime for any value of i
   
   { cout<<n<<"can not be expressed as a sum of two prime numbers";}
   
   return0;
   }
   
   int prime(int x)
   {
     int p; 
     bool isPrime=1; 
     for(p=2;p<=x/2;++p)
       { if(n%p==0) {isPrime=0; break;}
       }
   return isPrime;
   }
       
    
