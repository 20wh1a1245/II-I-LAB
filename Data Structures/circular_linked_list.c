#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
};
void insert_beg(struct Node**, int);
void insert_pos(struct Node**, int, int);
void insert_end(struct Node**, int);
void traversal(struct Node*);
void delete_beg(struct Node**);
void delete_pos(struct Node**, int);
void delete_end(struct Node**);
struct Node *search(struct Node*, int);
int main() {
	int choice, want_continue, pos, data, key;
	struct Node *head = NULL, *r;
	do {
		printf("enter the choice:");
		scanf("%d", &choice);
		switch(choice) {
			case 1: printf("enter the value of data:");
				scanf("%d", &data);
				insert_beg(&head, data);
				break;
			case 2: printf("enter the value of pos and data:");
				scanf("%d%d", &pos, &data);
				insert_pos(&head, pos, data);
				break;
			case 3: printf("enter the value of data:");
				scanf("%d", &data);
				insert_end(&head, data);
				break;
			case 4:traversal(head);
				break;
			case 5:delete_beg(&head);
				break;
			case 6: printf("enter the value of pos:");
				scanf("%d", &pos);
				delete_pos(&head, pos);
				break;
			case 7:delete_end(&head);
				break; 
			case 8: printf("enter the value of key:");
				scanf("%d", &key);
				r = search(head, key);
				if(r == NULL) 
					printf("unsuccessful search");
				else 
					printf("successful search");
				break;
				
		}
		printf("enter the value of want_continue:");
		scanf("%d", &want_continue);
	}while(want_continue == 1);
	return 0;
}

void insert_beg(struct Node **head, int data) {
	struct Node *p, *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	p = *head;
	if(*head == NULL) {
		temp -> next = temp;
		*head = temp;
	}
	else {
		while(p -> next != *head){
			p = p -> next;
	}
		temp -> next  = *head;
		p -> next = temp;
		*head = temp;
	}
}

void insert_pos(struct Node **head, int pos, int data) {
	struct Node *p, *temp, *q;
	int k = 1;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	p = *head;
	while(k < pos){
		q = p;
		p = p -> next;
		k++;
	}
	q -> next = temp;
	temp -> next = p;
}

void insert_end(struct Node **head, int data) {
	struct Node *p, *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = data;
	p = *head;
	if(*head == NULL) {
		temp -> next = temp;
		*head = temp;
	}
	else {
		while(p -> next != *head) {
			p = p -> next;
		}
		p -> next = temp;
		temp -> next = *head;
	}
}
void traversal(struct Node *head) {
	struct Node *p;
	p = head;
	while(p != head){
		printf("%d", p -> data);
		p = p -> next;
	}
}
void delete_beg(struct Node **head) {
	struct Node *p, *q;
	p = *head;
	if(*head == NULL) {
		printf("empty\n");
		return;
	}
	if((*head) -> next == *head) {
		*head = NULL;
		free(p);
	}
	else {
		while(p -> next != *head) {
			p = p -> next;
	}
}
	*head = (*head) -> next;
	p -> next = *head;
	free(p);
}
}
 
struct Node *search(struct Node *head, int key) {
	struct Node *p;
	p = head;
	while(p != head) {
		if (p -> data == key) {
			return p;
			}
		p = p -> next;
		}
	return NULL;
}
	
		
		
			
			
				
