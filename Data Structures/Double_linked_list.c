#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
	struct node *prev;
	};
void insert(struct node**, int, int);
void delete(struct node**, int);
void traversal(struct node*);
struct node *search(struct node*, int);

int main(){
	int choice, want_continue, pos, data, key;
	struct node *head = NULL, *r;
	//printf("enter the choice 1.insert 2.delete 3.traversal 4.search");
	do {
		printf("enter choice:");
		scanf("%d", &choice);
		switch(choice) {
			case 1:printf("enter the pos and data:");
				scanf("%d%d", &pos, &data);
				insert(&head, pos, data);
				break;
			case 2:printf("enter the value:");
				scanf("%d", &pos);
				delete(&head, pos);
				break;
			case 3:traversal(head);
				break;
			case 4:printf("enter the key:");
				scanf("%d", &key);
				r = search(head, key);
				if(r == NULL)
					printf("unsuccessful search");
				else
					printf("successful search");
				break;
		}
		printf("enter the value of want_continue");
		scanf("%d", &want_continue);
		}while(want_continue == 1);
	
		return 0;
	}
void insert(struct node **head, int pos, int data){
	struct node *temp, *p;
	int k = 1;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = data;
	p = *head;
	if(pos == 1){
		temp -> next = *head;
		temp -> prev = NULL;
		if(*head){
			(*head) -> prev = temp;
			}
		*head = temp;
		}
	else {
		while((k < pos - 1) && p -> next != NULL){
			p = p -> next;
			k++;
			}
		if(k != pos - 1){
			printf("position doesn't exist");
			return;
			}
		temp -> next = p -> next;
		temp -> prev = p;
		if(p -> next)
			p -> next -> prev = temp;
		p -> next = temp;
		}
	}
void delete(struct node **head, int pos) {
	struct node *p, *q;
	int k = 1;
	p = *head;
	if(pos == 1){
		*head = (*head) -> next;
		if(*head) 
			(*head) -> prev = NULL;
		free(p);
	}
	else{
		while((k < pos) && (p -> next != NULL)){
			p = p -> next;
			k++;
		}
		if(k != pos){
			printf("position doesn't exist\n");
			return;
		}
		q = p -> prev;
		q -> next = p -> next;
		if(p -> next) 
			p -> next -> prev = q;
		free(p);
	}
}
void traversal(struct node *head){
	struct node *p;
	int data;
	p = head;
	while(p != NULL){
		printf("%d\t", p -> data);
		p = p -> next;
		}
	}
struct node *search(struct node *head, int key) {
	struct node *p;
	p = head;
	while(p != NULL){
		if(p -> data == key){
			return p;
			}
		p = p -> next;
	}
	return NULL;
} 
		
		
		
		 
			
	
