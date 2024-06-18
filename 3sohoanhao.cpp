#include<stdio.h>
#include<math.h>

int main(){
	int n; scanf("%d", &n);
	int a=n, s=0;
	while(n!=0){
		int k=n%10;
		if(a%k==0) s+=k; 
		n/=10; 
	}
	if(s==a) printf("YES");
	else printf("NO");
}
