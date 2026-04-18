#include <iostream>
#include <cmath> //it is used when you use pow (power of)
using namespace std;
 int main(){
 	 
 	 double p,r,t;
 	 cout<< "enter principle "<<endl;
 	 cin>>p;
 	 cout<<"enter rate "<<endl;
 	 cin>>r;
 	 cout<<"enter time in year"<<endl;
 	 cin>>t;
 	 
 	 double A= p*(( pow ((1+r/100),t))); //- pow(base, exponent) returns the result as a double.
 	 double CI = A-p;
 	 cout<<"The compound interest is => " <<CI;
 	   
return 0;
 }
