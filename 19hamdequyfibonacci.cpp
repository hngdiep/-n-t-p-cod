#include<stdio.h>

unsigned long long fibo(int n){
	if(n<=1) return n;
	else{
		return (fibo(n-1)+fibo(n-2));
	} 
}

int main(){
	int n; scanf("%d", &n);
	printf("%lld", fibo(n));
	return 0;
} 


