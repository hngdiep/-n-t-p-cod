#include<stdio.h>
#include<math.h>

int pas(int n, int k){
	if(k==0 || k==n) return 1;
	else{
		return pascal(k-1, n-1) + pascal(k, n-1);
	}
}

int main(){
	int n; scanf("%d", &n);
	for(int i=0; i<=n; i++){
		for(int j=0; j<=i; j++){
			printf("%5d", pas(j, i));
		}
		printf("\n");
	}
	return 0;
}
