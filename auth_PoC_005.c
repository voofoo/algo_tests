#include <stdio.h>
#include <stdbool.h>

#define PIN 1234
#define MAX_TRIES 3
#define WITHDRAW_LIMIT 500.0

bool is_valid_pin(int pin) {
return pin >= 1000 && pin <= 9999;
}

int main() {
int input;
int tries = 0;
double ypol = 10000.0;
double max_withdraw = WITHDRAW_LIMIT;
double withdrawal_amount;

printf("Welcome to HFSP Bank\n");

while (tries < MAX_TRIES) {
    
    printf("Please type your 4-digit PIN: \n");
    scanf("%d", &input);

    if (input == PIN && is_valid_pin(input)) {
        while (1) {
            
            printf("Please type: \n 1 to check balance\n 2 to withdraw\n 3 to exit: \n");
            scanf("%d", &input);

            switch (input) {
                case 1:
                    printf("Your balance is: %.2f\n", ypol);
                    break;
                case 2:
                    printf("Enter withdrawal amount: \n");
                    scanf("%lf", &withdrawal_amount);
                    if (withdrawal_amount > ypol) {
                        printf("Insufficient balance\n");
                    } else if (withdrawal_amount > max_withdraw) {
                        printf("Withdrawal amount exceeds maximum limit\n");
                    } else {
                        ypol -= withdrawal_amount;
                        printf("Withdrawal successful. Remaining balance: %.2f\n\n", ypol);
                    }
                    break;
                case 3:
                    printf("Thank you for using HFSPBank\nGoodbye\n");
                    return 0;
                default:
                    printf("Invalid option\n");
            }
        }
    } else if (input != PIN) {
        printf("Incorrect PIN\n");
    } else {
        printf("Invalid PIN\n");
    }

    tries++;
}

printf("\nYou typed the wrong PIN 3 times\nYour card is held.\n");
printf("\nYou should have used Bitcoin\n");
printf("# H F S P #\n");
return 0;
}
