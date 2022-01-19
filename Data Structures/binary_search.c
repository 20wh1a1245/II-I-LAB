#include<stdio.h>
void Binary_search(int [], int, int);
int main(){
	int a[10], i, n, key, p, low, high, mid;
	printf("enter the value of n:");
	scanf("%d", &n);
	printf("enter the value of key:");
	scanf("%d", &key);
	printf("enter the elements into the array:");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		}
	Binary_search(a, key, n);
	return 0;
}
	
void Binary_search(int a[], int key, int n){
	int i, low, high, mid;
	low = 0;
	high = n - 1;
	while(low <= high) {
		mid = (low + high) / 2;
		if(key == a[mid]){
			printf("%d is the position", mid + 1);
			break;
		}
		else if(key > a[mid]){
			low = mid + 1;
			}
		else{
			high = mid - 1;
			}
		}
	if(low > high){
		printf("element is not found");
	}
}
		
	
	
		

		 

	
