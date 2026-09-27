#include <iostream>
using namespace std;
int main(){
int n, pos, i;
cout << "Enter Size: ";
cin >> n;
int a[n];
cout << "Enter Elements:" << endl;
for(i = 0; i < n; i++)
cin >> a[i];
cout << "Enter position to delete: ";
cin >> pos;
if(pos < 1 || pos > n)
{
cout << "Invalid Position";
}
else
{
for(i = pos - 1; i < n - 1; i++)
a[i] = a[i + 1];
cout << "Array After Deletion:" << endl;
for(i = 0; i < n - 1; i++)
cout << a[i] << " ";
}
return 0;
}
