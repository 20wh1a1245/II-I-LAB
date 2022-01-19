#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[n];
int front = -1;
int rear = -1;
int front , rear;
int isfull(); 
int isempty();
void enqueue(int data);
int dequeue();
void display();
int main() {
	int want_continue, r, data, choice;
	do {
		printf("enter the value of choice");
		scanf("%d", &choice);
		switch(choice) {
			case 1:printf("enter the value of data");
				scanf("%d", &data);
				enqueue(data);
				break;
			case 2:r = dequeue();
				printf("%d", r);
				break;
			case 3: display();
				break;
		}
	printf("enter the value of want_continue");
	scanf("%d", &want_continue);
	}while(want_continue == 1);
	return 0;
}
int isfull() {
	return rear == n - 1;
}
int isempty() {
	return front == -1;
}
void enqueue(int data) {
	if(isfull() == 1) {
		printf("overflown\n");
	}
	if(front == -1) {
		front = rear = 0;
		
	}
	else {
	
		rear += 1;
		 }
	a[rear] = data;
}
int dequeue() {
	int data;
	if(isempty() == 1) {
		printf("underflown\n");
	}
	data = a[front];
	
	if(front == rear) {
		front = rear = -1;
	} 
	else {
		front += 1;
		return data;
	} 
}
void display() {
	int i;
	for(i = front; i <= rear; i++) {
		printf("%d\t", a[i]);
	}
}
	
		
	
				
	
