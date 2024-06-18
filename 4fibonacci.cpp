#include<stdio.h>
#include<math.h>

int fibo(int n){
	if(n<=0) return 0;
	else if(n==1) return 0;
	
	int a=0, b=1, s=1;
	for(int i=2; i<=n; i++){
		int c=a+b;
		s+=c;
		a=b;
		b=c;
	}
	return s;
}

int main(){
	int n; scanf("%d", &n);
	int s=fibo(n);
	printf("%d", s);
	return 0;
} 
