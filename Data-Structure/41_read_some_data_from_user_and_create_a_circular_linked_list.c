#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node *next;
};
struct Node* createCircularList(int n) {
struct Node *head = 0, *temp, *newnode;
int value;
if (n <= 0) {
printf("Invalid number of nodes\n");
return 0;
}
printf("Enter data for node 1: ");
scanf("%d", &value);
head = (struct Node*)malloc(sizeof(struct Node));
head->data = value;
head->next = head;
temp = head;
for (int i = 2; i <= n; i++) {
printf("Enter data for node %d: ", i);
scanf("%d", &value);
newnode = (struct Node*)malloc(sizeof(struct Node));
newnode->data = value;
newnode->next = head;
temp->next = newnode;
temp = newnode;
}
return head;
}
void display(struct Node* head) {
struct Node* temp = head;
printf("\nCircular Linked List: ");
if (head == 0) {
printf("List is empty.\n");

return;
}
do {
printf("%d ", temp->data);
temp = temp->next;
} while (temp != head);
printf("\n");
}
int main() {
int n;
printf("How many nodes you want to create? ");
scanf("%d", &n);
struct Node* head = createCircularList(n);
display(head);
return 0;
}
