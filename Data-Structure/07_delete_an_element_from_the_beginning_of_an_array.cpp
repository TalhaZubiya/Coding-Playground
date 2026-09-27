#include <iostream>
using namespace std;
int main()
{
int n, i;
cout << "Enter Size: ";
cin >> n;
int a[n];
cout << "Enter Elements:" << endl;
for(i = 0; i < n; i++)
cin >> a[i];
for(i = 0; i < n - 1; i++)
a[i] = a[i + 1];
cout << "Array After Deletion:" << endl;

for(i = 0; i < n - 1; i++)
cout << a[i] << " ";
return 0;
}
