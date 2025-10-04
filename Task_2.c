#include<stdio.h>

int main(){
	int number , i;
		printf("Enter a number: ");
		scanf("%d", &number);
	for ( i=1; i<=10; i++){
		int product = number * i;
		printf("%d X %d = %d\n", number , i , product);
	}	
	
	return 0;
}
