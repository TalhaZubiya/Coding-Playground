#include <iostream>
using namespace std;
int main()
{
int n,i,pos,newElement;
cout<<"Enter Size: ";
cin>>n;
int a[n];
cout<<"Enter Elements:"<<endl;
for(i=0; i<n; i++)
{
cin>>a[i];
}
cout<<"Enter position: ";
cin>>pos;
cout<<"Enter element to insert: ";
cin>>newElement;
if(pos<1 || pos>n+1)
{
cout<<"Invalid position"<<endl;
}

else
{
for(i=n; i>=pos; i--)
{
a[i]=a[i-1];
}
a[pos-1]=newElement;
cout<<"Array After Insertion:"<<endl;
for(i=0; i<n+1; i++)
{
cout<<a[i]<<" ";
}
}
return 0;
}
