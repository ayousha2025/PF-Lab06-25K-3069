#include<stdio.h>

int main(){
	int bank_balance = 50000;
	int amount_to_withdraw;

while(bank_balance!=0){
 	printf("Your current balance is %d\n", bank_balance);
  	printf("Enter the amount you want to withdraw: ");
  	scanf("%d", &amount_to_withdraw);
  
 	if (amount_to_withdraw > bank_balance){
  		printf("Insufficient balance.\n");
  		break;
    }
  else{
  		bank_balance = bank_balance - amount_to_withdraw;
  		printf("Successful withdraw!\n");
  }
	}
	return 0;
}
