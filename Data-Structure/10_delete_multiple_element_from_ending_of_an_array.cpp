#include <iostream>
using namespace std;
int main()
{
int n, k, i;
cout << "Enter Size: ";
cin >> n;
int a[n];
cout << "Enter Elements:" << endl;
for(i = 0; i < n; i++)
cin >> a[i];
cout << "How many elements to delete from end? ";
cin >> k;
if(k > n) k = n;
cout << "Array After Deletion:" << endl;
for(i = 0; i < n - k; i++)
cout << a[i] << " ";
return 0;
}
