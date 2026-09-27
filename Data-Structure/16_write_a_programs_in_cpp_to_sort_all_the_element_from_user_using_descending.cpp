#include <iostream>
using namespace std;
void selection(int arr[], int x) {
for(int i = 0; i < x - 1; i++){
int maximum = i;
for(int j = i + 1; j < x; j++){
if(arr[j] > arr[maximum])
maximum = j;
}
int temp = arr[i];
arr[i] = arr[maximum];
arr[maximum] = temp;
}
}
int main() {
int x;
cout << "Enter number of elements: ";

cin >> x;
int arr[x];
cout << "Enter " << x << " elements:\n";
for(int i = 0; i < x; i++){
cin >> arr[i];
}
selection(arr, x);
cout << "Sorted Line: ";
for(int i = 0; i < x; i++){
cout << arr[i] << " ";
}
cout << endl;
return 0;
}
