#include<stdio.h>

int sapxepnoibot(int a[], int n){
	int temp;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		} 
	} 
} 

int main(){
	int n; scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	sapxepnoibot(a, n);
 for(int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
