#include <stdio.h>
#include <stdlib.h>
int main()
{
struct node

{
int data;
struct node *next;
};
struct node *head = 0, *newnode, *temp, *prev;
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
printf("If you want to continue press 1: ");
scanf("%d", &choice);
}
temp=head;
while(temp->next !=0)
{
prev = temp;
temp= temp->next;
}
if(temp==head)
{
head=0;
free(temp);
}
else
{
prev->next=0;
free(temp);
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
