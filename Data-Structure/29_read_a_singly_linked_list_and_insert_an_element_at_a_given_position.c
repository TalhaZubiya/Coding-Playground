
#include <stdio.h>
#include <stdlib.h>
int main(){
struct node{
int data;
struct node *next;
};
struct node *head = 0, *newnode, *temp;
int choice = 1;
while (choice){
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = 0;
if (head == 0){
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
int count = 0;
temp = head;
while (temp != 0){
count++;
temp = temp->next;
}
int pos;
printf("Enter the position where you want to insert: ");
scanf("%d", &pos);
while (pos < 1 || pos > count + 1){
printf("Invalid position\n: ");
scanf("%d", &pos);

}
newnode = (struct node*) malloc(sizeof(struct node));
printf("Enter data to insert: ");
scanf("%d", &newnode->data);
if (pos == 1){
newnode->next = head;
head = newnode;
}
else{
temp = head;
for (int i = 1; i < pos - 1; i++)
{
temp = temp->next;
}
newnode->next = temp->next;
temp->next = newnode;
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
