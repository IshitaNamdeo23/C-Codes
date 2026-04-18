#include<iostream>
using namespace std;
int main(){
	 float P;
	 float R;
	 float T;
	 float simpleinterest;
	  cout<<" Enter the principle amount : "<<endl;
	  cin>> P;
	  cout<<" Enter the  rate of time : "<<endl;
	  cin>> R;
	  cout<<" Enter the time given : "<<endl;
	  cin>> T;
	  
	  simpleinterest =(P*R*T)/100;
	  cout<<("the simple interest is => ")<< simpleinterest ;
	  return 0;
	  
} 

