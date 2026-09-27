#include <iostream>
using namespace std;
int main()
{
int n, m, i;
cout << "Enter Size: ";
cin >> n;
int a[n + 100];
cout << "Enter Elements:" << endl;
for(i = 0; i < n; i++){
cin >> a[i];
}
cout << "How many values to insert at the end? ";
cin >> m;
cout << "Enter " << m << " values:" << endl;
for(i = 0; i < m; i++)
{
cin >> a[n + i];
}
cout << "Array after insertion:" << endl;
for(i = 0; i < n + m; i++)
{
cout << a[i] << " ";
}
return 0;
}
