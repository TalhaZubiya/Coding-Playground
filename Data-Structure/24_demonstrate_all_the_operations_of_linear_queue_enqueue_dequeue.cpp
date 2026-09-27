#include<iostream>
using namespace std;
constexpr int qsize = 5;
int que[qsize];
int qfront = -1;
int qrear = -1;
void enqueue()
{
int value;
cout << endl << "Enter value to enqueue: ";
cin >> value;
if (qfront == -1 && qrear == -1)
{
qfront = 0;
qrear = 0;
que[qrear] = value;
cout << endl << "Enqueued.";
}
else if (qrear == qsize-1)
{
cout << endl << "Enqueue failed as queue is Overflow.";
}
else
{
qrear++;
que[qrear] = value;
cout << endl << "Enqueued.";
}
return;
}
void dequeue()
{
if (qfront == -1 && qrear == -1)

{
cout << endl << "Underflow.";
}
else if (qfront == qrear)
{
qfront = -1;
qrear = -1;
cout << endl << "Dequeued.";
}
else
{
qfront++;
cout << endl << "Dequeued.";
}
return;
}
void peak()
{
if (qfront == -1 && qrear == -1)
{
cout << endl << "Empty.";
}
else
{
cout << endl << que[qfront];
}
return;
}
void isfull()
{
if (qrear == qsize-1)
cout << endl << "True.";
else
cout << endl << "False.";
return;
}

void isempty()
{
if (qfront == -1 && qrear == -1)
cout << endl << "True.";
else
cout << endl << "False.";
return;
}
void display()
{
if (qfront == -1 && qrear == -1)
cout << endl << "Empty.";
else
{
for (int i = qfront; i <= qrear; i++)
{
cout << endl << que[i] << " ";
}
}
return;
}
int main()
{
int choice;
cout << "1. Enqueue \n2. Dequeue \n3. peak \n4. isfull \n5. isempty \n6. display
\n7. exit";
cout << endl << "Enter choice: ";
cin >> choice;
while(choice != 7)
{
switch (choice)
{
case 1:
enqueue();
cout << endl << "Enter choice: ";
cin >> choice;

break;
case 2:
dequeue();
cout << endl << "Enter choice: ";
cin >> choice;
break;
case 3:
peak();
cout << endl << "Enter choice: ";
cin >> choice;
break;
case 4:
isfull();
cout << endl << "Enter choice: ";
cin >> choice;
break;
case 5:
isempty();
cout << endl << "Enter choice: ";
cin >> choice;
break;
case 6:
display();
cout << endl << "Enter choice: ";
cin >> choice;
break;
}
}
cout << endl << "Program successfully exited.";
return 0;
}
