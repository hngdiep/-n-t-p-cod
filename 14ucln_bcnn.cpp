#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
	while(b!=0){
		int t=b;
		b%=a;
		a=t;
	}
	return a;
}

long long bcnn(int a, int b){
	int uc=ucln(a, b);
	return (a*b)/uc;
} 

int main(){
	int a, b; scanf("%d %d", &a, &b);
	printf("%d %lld", ucln(a, b), bcnn(a, b));
	return 0;
}
