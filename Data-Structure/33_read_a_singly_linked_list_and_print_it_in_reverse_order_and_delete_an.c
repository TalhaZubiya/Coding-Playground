#include<stdio.h>
#include<stdlib.h>
int main(){
struct node{
int data;
struct node *next;
};
struct node *head, *newnode, *temp, *nextnode, *prev;
head = 0;
int input = 1;
while(input == 1){
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter Data: ");
scanf("%d", &newnode->data);
newnode->next = 0;
if(head == 0){
head = temp = newnode;
}
else{
temp->next = newnode;
temp = newnode;
}
printf("If you want to continue press 1: ");
scanf("%d", &input);
}
if(head == 0){
printf("Empty\n");
return 0;
}
prev = 0;
temp = head;
while(temp != 0){
nextnode = temp->next;
temp->next = prev;
prev = temp;

temp = nextnode;
}
head = prev;
printf("Reversed List: ");
temp = head;
while(temp != 0){
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
int count = 0;
temp = head;
while(temp != 0){
count++;
temp = temp->next;
}
int pos, i = 1;
printf("Enter position to delete: ");
scanf("%d", &pos);
while(pos < 1 || pos > count){
printf("Invalid Position\n");
scanf("%d", &pos);
}
if(pos == 1){
temp = head;
head = head->next;
free(temp);
}
else{
temp = head;
for(i = 1; i < pos - 1; i++){
temp = temp->next;
}
nextnode = temp->next;
temp->next = nextnode->next;
free(nextnode);
}
printf("Final Linked List: ");
temp = head;

while(temp != 0){
printf("%d ", temp->data);
temp = temp->next;
}
return 0;
}
