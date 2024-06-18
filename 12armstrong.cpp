#include<stdio.h>
#include<math.h>

int demso(int n){
	int cnt=0;
	while(n!=0){
		cnt++;
		n/=10;
	}
	return cnt;
}

int armstrong(int n){
	int s=0, a=n;
	int d=demso(n);
	while(n!=0){
		int k=pow(n%10, d);
		s+=k;
		n/=10;
	}
	return s==a;
}

int main(){
	int n; scanf("%d", &n);
	printf("%d", armstrong(n));
	return 0;
} 
