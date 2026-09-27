#include <iostream>
using namespace std;
int main()
{
int n, i, pos, m;
cout << "Enter Size: ";
cin >> n;
int a[n + 100];
cout << "Enter Elements:" << endl;
for(i = 0; i < n; i++)
{
cin >> a[i];
}
cout << "Enter position to insert: ";
cin >> pos;
cout << "How many elements to insert: ";
cin >> m;
int b[m];
cout << "Enter " << m << " new elements:" << endl;
for(i = 0; i < m; i++)
{
cin >> b[i];
}
if(pos < 1 || pos > n + 1)
{
cout << "Invalid position" << endl;
}
else
{
for(i = n - 1; i >= pos - 1; i--)
{
a[i + m] = a[i];
}
for(i = 0; i < m; i++)
{
a[(pos - 1) + i] = b[i];
}

cout << "Array After Insertion:" << endl;
for(i = 0; i < n + m; i++)
{
cout << a[i] << " ";
}
}
return 0;
}
