#include <iostream>
using namespace std;
void insert(int arr[], int x) {
for(int i = 1; i < x; i++) {
int k = arr[i];
int j = i - 1;
while(j >= 0 && arr[j] < k) {
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = k;
}
}
int main() {
int x;
cout << "Enter number of elements: ";
cin >> x;
int arr[x];
cout << "Enter " << x << " elements:\n";
for(int i = 0; i < x; i++) {
cin >> arr[i];
}
insert(arr, x);
cout << "Sorted Line: ";
for(int i = 0; i < x; i++) {
cout << arr[i] << " ";
}
cout << endl;
return 0;
}
