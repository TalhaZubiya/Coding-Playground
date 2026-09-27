#include <stdio.h>
#include <stdlib.h>
int main()
{
struct node
{
int data;
struct node *next;
};
struct node *head=0, *newnode, *temp, *nextnode;
int choice = 1;

while (choice)
{
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = 0;
if (head == 0)
head = temp = newnode;
else
{
temp->next = newnode;
temp = newnode;
}
printf("If you want to continue press 1: ");
scanf("%d", &choice);
}
if (head == 0)
{
printf("List is empty\n");
return 0;
}
int pos, count = 0;
temp = head;
while (temp != 0)
{
count++;
temp = temp->next;
}
printf("Enter position to delete: ");
scanf("%d", &pos);
while (pos < 1 || pos > count)
{
printf("Invalid position\n");
scanf("%d", &pos);
}
if (pos == 1)
{
temp = head;
head = head->next;

free(temp);
}
else
{
temp = head;
for (int i = 1; i < pos - 1; i++)
{
temp = temp->next;
}
nextnode = temp->next;
temp->next = nextnode->next;
free(nextnode);
}
printf("Linked List: ");
temp = head;
while (temp != 0)
{
printf("%d ", temp->data);
temp = temp->next;
}
return 0;
}
