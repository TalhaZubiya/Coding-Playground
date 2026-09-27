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
cout << "How many elements to delete from beginning? ";
cin >> k;
if(k > n) k = n;
for(i = 0; i < n - k; i++)
a[i] = a[i + k];
cout << "Array After Deletion:" << endl;
for(i = 0; i < n - k; i++)
cout << a[i] << " ";
return 0;

}
