#include <iostream>
using namespace std;
int main(){
int n, pos, k, i;
cout << "Enter Size: ";
cin >> n;
int a[n];
cout << "Enter Elements:" << endl;
for(i = 0; i < n; i++)
cin >> a[i];
cout << "Enter position to start deletion: ";
cin >> pos;
cout << "How many elements to delete: ";
cin >> k;
if(pos < 1 || pos > n){
cout << "Invalid Position";
}
else{
if(pos - 1 + k > n)
k = n - (pos - 1);
for(i = pos - 1; i < n - k; i++)
a[i] = a[i + k];
cout << "Array After Deletion:" << endl;
for(i = 0; i < n - k; i++)
cout << a[i] << " ";
}
return 0;
}
