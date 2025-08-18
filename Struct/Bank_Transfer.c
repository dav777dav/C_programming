#include <stdio.h>

struct Account {
	int ownerId;
	float balance;
};

int main() {
	struct Account a1 = {1};
	printf("Enter the %d account's balance: ", a1.ownerId);
	scanf("%f", &a1.balance);
	
	struct Account a2 = {2};
	printf("Enter the %d account's balance: ", a2.ownerId);
	scanf("%f", &a2.balance);

	printf("Before their balances: \n%d account = %f \n%d account = %f\n", a1.ownerId, a1.balance, a2.ownerId, a2.balance);
	
	float transfer = a1.balance * 0.2;
	a1.balance -= transfer;
	a2.balance += transfer;

	printf("After their balances with transfer: \n%d account = %f \n%d account = %f\n", a1.ownerId, a1.balance, a2.ownerId, a2.balance);
	
	return 0;
}
