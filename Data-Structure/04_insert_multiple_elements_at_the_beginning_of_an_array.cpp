#include <iostream>
using namespace std;
int main(){
int n, m, i;
cout << "Enter size: ";
cin >> n;
int a[n + 100];

cout << "Enter elements:" << endl;
for(i = 0; i < n; i++)
{
cin >> a[i];
}
cout << "How many elements you want to insert at the beginning? ";
cin >> m;
int b[m];
cout << "Enter " << m << " elements:" << endl;
for(i = 0; i < m; i++)
{
cin >> b[i];
}
for(i = n - 1; i >= 0; i--)
{
a[i + m] = a[i];
}
for(i = 0; i < m; i++)
{
a[i] = b[i];
}
cout << "Array after insertion:" << endl;
for(i = 0; i < n + m; i++)
{
cout << a[i] << " ";
}
return 0;
}
