#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *prev;
struct node *next;
};
int main()
{
struct node *head = 0, *newnode, *temp;
int input = 1;

while(input)
{
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->prev = 0;
newnode->next = 0;
if(head == 0)
{
head = temp = newnode;
}
else
{
temp->next = newnode;
newnode->prev = temp;
temp = newnode;
}
printf("If you want to continue press 1: ");
scanf("%d", &input);
}
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter the value to insert at beginning: ");
scanf("%d", &newnode->data);
newnode->prev = 0;
newnode->next = head;
if(head != 0)
head->prev = newnode;
head = newnode;
printf("Linked list: ");
temp = head;
while(temp != 0)
{
printf("%d ", temp->data);
temp = temp->next;
}
return 0;
}
