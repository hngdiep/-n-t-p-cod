#include<stdio.h>

int main(){
	int m, n; scanf("%d %d", &m, &n);
	int a[m];
	for(int i=0; i<m; i++) scanf("%d", &a[i]);
	int b[n];
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	int i=0, j=0, k=0;
	int c[m+n];
	while(i<m && j<n){
		if(a[i]<=b[j]){
			c[k++]=a[i];
			i++; 
		}
		else{
			c[k++]=b[j];
			j++; 
		}
	}
	while(i<m){
		c[k++]=a[i++];
	}
	while(j<n){
		c[k++]=b[j++];
	} 
	for(int i=0; i<m+n; i++)
	printf("%d", c[i]);
} 
