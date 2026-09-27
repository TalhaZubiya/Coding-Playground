#include <iostream>
using namespace std;
int main() {
int n, key;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter the elements of the array: ";
for (int i = 0; i < n; i++) {
cin >> a[i];
}
cout << "Enter the element to search: ";
cin >> key;
int i;
for (i = 0; i < n; i++) {
if (a[i] == key) {
cout << "Element found at index: " << i << endl;
break;
}
}
if (i == n) {
cout << "Element not found" << endl;
}
return 0;
}
