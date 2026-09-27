#include <stdio.h>
#include <stdlib.h>
int main()
{
struct node
{
int data;
struct node *next;
};
struct node *head, *newnode, *temp;
head = 0;
int choice = 1;
while (choice)
{
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = 0;
if (head == 0)
{
head = temp = newnode;
}
else
{
temp->next = newnode;
temp = newnode;
}
printf("Press 1 to continue: ");
scanf("%d", &choice);
}
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter the data you want to insert at end: ");
scanf("%d", &newnode->data);
newnode->next = 0;

temp = head;
while (temp->next != 0)
{
temp = temp->next;
}
temp->next = newnode;
printf("Linked List: ");
temp = head;
while (temp != 0)
{
printf("%d ", temp->data);
temp = temp->next;
}
return 0;
}
