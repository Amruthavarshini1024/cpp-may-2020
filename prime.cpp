#include<iostream>
using namespace std;

int prime(int x);
int main()
{ int n;
 int i; 
 int check=0;
 cout<<"Enter a positive integer:";
 cin>>n;
 
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
   
   return 0;
   }
   
   int prime(int x) 
   {
     int p; 
     bool isPrime=1; 
     for(p=2;p<=x/2;++p)
       { if(x%p==0) {isPrime=0; //if x is not a prime number, prime func returns 0
                     break;}
       }
   return isPrime; //isPrime==1 implies x is prime, else not prime
   }
       
    
