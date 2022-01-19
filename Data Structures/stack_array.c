#include<stdio.h>
#include<stdlib.h>
#define n 5
int a[n];
int top = -1;
int isempty(); 
int isfull();
void push(int);
int pop();
void display();
int main() {
	int choice, r, want_continue, data;
	/*printf("enter the value of n:");
	scanf("%d", &n); */
	do {
		printf("enter the value of choice:");
		scanf("%d", &choice);
		switch(choice) {
			case 1 :printf("enter the value of data");
				scanf("%d", &data);
				push(data);
				break;
			case 2:r = pop();
				printf("%d", r);
				break;
			case 3:display();
				break;
			}
		printf("enter the value of want_continue");
		scanf("%d", &want_continue);
	}while(want_continue == 1);
	return 0;
}
int isempty() {
	
	return top < 0;
}
int isfull() {
	
	return top == n - 1;
}
void push(int data) {
	
	if(isfull() == 1) {
		printf("overflown\n");
		return;
	}
	top += 1;
	a[top] = data;
	
}
int pop() {
	
	if(isempty() == 1) {
		printf("underflow\n");
		//return;
	}
	return a[top--];
}
void display() {
	int i;
	for(i = 0; i <= top; i++) {
		printf("%d", a[i]);
	}
}
	
	
		
				

	 
