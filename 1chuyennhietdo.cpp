#include<stdio.h>
#include<math.h>

float CF(float c){
	return c*9/5+32; 
}

float FC(float f){
	return (f-32)*(5/9); 
} 

int main(){
	int choice;
	scanf("%d", &choice);
	float n;
	if(choice==1){
		scanf("%f", &n);
		printf("%.2f\n", CF(n)); 
	}
	if(choice==2){
		scanf("%f", &n);
		printf("%.2f\n", FC(n));
	}
	return 0; 
} 
