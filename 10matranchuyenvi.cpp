#include<stdio.h>

int main(){
	int n, m; scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]); 
		}
	}
	int d=m, c=n;
	int b[m][n];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			b[i][j]=a[j][i];
			printf("%d ", b[i][j]); 
		}
		printf("\n"); 
	}
	return 0; 
} 
