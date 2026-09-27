#include <stdio.h>
#include <stdlib.h>
int main()
{
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head, *newnode, *temp;
int input=1;
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
printf("Linked list: ");

temp = head;
while(temp->next != head)
{
printf("%d ", temp->data);
temp = temp->next;
}
printf("%d", temp->data);
return 0;
}
