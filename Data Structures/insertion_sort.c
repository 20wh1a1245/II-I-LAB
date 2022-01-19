#include<stdio.h>
void insertion_sort(int [], int);
int main() {
	int a[20], n, i;
	printf("enter the value of n:");
	scanf("%d", &n);
	printf("enter the elements into the array:");
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		}
	insertion_sort(a, n);
	printf("elements in sorted order:");
	for(i = 0; i < n; i++) {
		printf("%d\t", a[i]);
		}
	return 0;
	}
void insertion_sort(int a[], int n){
	int i, j, temp;
	for(i = 1; i < n; i++){
		j = i;
		while(j > 0 && a[j - 1] > a[j]) {
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
			}
		}
	}
			
