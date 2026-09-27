#include<iostream>
using namespace std;
constexpr int sizeofstk = 5;
int stk[sizeofstk];
int top = -1;
int popedelements[100];
int popednum = 0;
void push()
{
if (top == sizeofstk-1)
{
cout << "Stack is overflow!";
return;
}
else
{
top++;
cout << "Enter element to push: ";
cin >> stk[top];
return;
}
}
void pop()
{
if (top == -1)
{
cout << endl << "Stack is underflow!";
return;
}
else

{
popedelements[popednum++] = stk[top];
top--;
return;
}
}
void peek(){
if (top == -1)
{
cout << endl << "Stack is empty.";
return;
}
else
{
cout << endl << stk[top];
return;
}
}
void isfull()
{
if (top == sizeofstk-1)
{
cout << endl << "True";
return;
}
else
{
cout << endl << "False";
return;
}
}
void isempty()
{
if (top == -1)
{
cout << endl << "True";
return;
}
else
{

cout << endl << "False";
return;
}
}
void display()
{
if (top == -1)
{
cout << endl << "Nothing to display since stack is empty.";
return;
}
else{
cout << endl;
for (int i = top; i>=0; i--)
{
cout << stk[i] << " ";
}
return;
}
}
int main(){
int choice;
cout << "1. push()" << endl << "2. pop()" << endl << "3. peek()" << endl << "4.
isfull" << endl << "5. isempty" << endl << "6. display" << endl << "7. exit";
cout <<endl << "Choose which operation to do: ";
cin >> choice;
while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice
!= 5 && choice != 6 && choice != 7)
{
cout << endl << "Invalid choice. Enter valid choice: ";
cin >> choice;
}
while (choice != 7)
{
switch (choice){
case 1:
push();
break;
case 2:
pop();

break;
case 3:
peek();
break;
case 4:
isfull();
break;
case 5:
isempty();
break;
case 6:
display();
break;
}
cout << endl << "Choose which operation to do now: ";
cin >> choice;
}
cout << endl << "Program successfully exited.";
return 0;
}
