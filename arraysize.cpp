#include<iostream>
using namespace std;
int main()
{
int n,size;
int a[] = {5,11,15,3,20,25,30,100};
size = sizeof(a);
int length = sizeof(a)/sizeof(a[0]);
cout<<"Size of array" << size<<endl;
cout<<"Length of array"<<length;
return 0;
}




//for array traversal operation
#include<iostream>
using namespace std;
int main()
{
int n,i;
int a[] = {5,11,15,3,20,25};
cout<<"Enter the size of array";
cin>>n;
int length = sizeof(a) / sizeof(a[0]);
for(i=0;i<=n;i++)
{
cout<<"visited array elements "<<i<<"="<<a[i]<<endl;}
return 0;
}
