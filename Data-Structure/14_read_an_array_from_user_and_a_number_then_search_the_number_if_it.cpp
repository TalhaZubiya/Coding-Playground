#include <iostream>
using namespace std;
int binarySearch(int a[], int n, int value){
int left = 0, right = n - 1;
while (left <= right)
{
int mid = (left + right) / 2;
if (a[mid] == value)
{
return mid;
}
else if (a[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}
return -1;
}
int main()
{
int n, value;

cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter " << n << " sorted elements: ";
for (int i = 0; i < n; i++)
{
cin >> a[i];
}
cout << "Enter the value you want to search: ";
cin >> value;
int index = binarySearch(a, n, value);
if (index != -1)
{
cout << value << " found at index " << index << endl;
}
else
{
cout << value << " not found" << endl;
}
return 0;
}
