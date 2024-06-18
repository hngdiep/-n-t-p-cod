#include<stdio.h>

int giaithua(int n){
	if(n<0) return 0;
	int giaithua=1;
	for(int i=1; i<=n; i++){
		giaithua=giaithua*i; 
	}
	return giaithua; 
}

int main(){
	int n; scanf("%d", &n);
	printf("%d", giaithua(n));
	return 0; 
} 
