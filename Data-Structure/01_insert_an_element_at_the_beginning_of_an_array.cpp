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
cout<<"Enter value to insert: "<<endl;
cin>>value;
int index=0;
for(i=n-1; i>=index; i--)
{
a[i+1]=a[i];
}
a[index]=value;
for(i=0; i<n+1; i++)
{
cout<<a[i]<<" ";
}
return 0;
}
