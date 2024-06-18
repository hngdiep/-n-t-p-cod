#include<stdio.h>

int main(){
	int n; scanf("%d", &n);
	int k=0;
	if(n>0){
		while(n!=0){
			int a=n%10;
			if(a>=k) k=a;
			n/=10;
		}
	}
	printf("%d", k);
	return 0;
}
