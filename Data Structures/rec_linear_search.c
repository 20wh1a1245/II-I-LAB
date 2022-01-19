#include<stdio.h>
int rec_linear_search(int [], int, int);
int main() {
	int a[10], key, n, i = 0, p;
	printf("enter the value of n:");
	scanf("%d", &n);
	printf("enter the value of key:");
	scanf("%d", &key);
	printf("enter the elements into array:");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		}
	p = rec_linear_search(a, key, n);
	if(p > 0){
		printf("%d is the position", p);
		}
	else{
	printf("element is not found");
	}
	return 0;
}
int rec_linear_search(int a[], int key, int n){
	int i;
	while(a[i] > 0){
		if(a[i] == key){
			return i + 1;
		}
		else{
			i++;
			rec_linear_search(a, key, n);
			
			}
		}
	return -1;
}
			
	/* for(i = 0; i < n; i++){
		if(a[i] == key){
			return i + 1;
		}
		
	}
	return -1;
	
	
} */

