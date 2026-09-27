#include <iostream>
using namespace std;
int main()
{
int n,i,value;
cout<<"Enter Size: ";
cin>>n;
int a[n+1];
cout<<"Enter Elements:"<<endl;
for(i=0; i<n; i++)
{
cin>>a[i];
}
cout<<"Enter value to insert: ";
cin>>value;
a[n]=value;
for(i=0; i<n+1; i++)
{
cout<<a[i]<<" ";
}
return 0;
}
