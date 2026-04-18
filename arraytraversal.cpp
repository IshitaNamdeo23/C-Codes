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
