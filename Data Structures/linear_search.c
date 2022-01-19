#include<stdio.h>
int linear_search(int [], int, int);
int main() {
	int a[10], key, n, i, p;
	printf("enter the value of n:");
	scanf("%d", &n);
	printf("enter the value of key:");
	scanf("%d", &key);
	printf("enter the elements into array:");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		}
	p = linear_search(a, key, n);
	if(p > 0){
		printf("%d is the position", p);
		}
	else{
	printf("element is not found");
	}
	return 0;
}
int linear_search(int a[], int key, int n){
	int i;
	for(i = 0; i < n; i++){
		if(a[i] == key){
			return i + 1;
		}
		
	}
	return -1;
	
	
}
