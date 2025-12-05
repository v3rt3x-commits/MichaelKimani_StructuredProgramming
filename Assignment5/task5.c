#include <stdio.h>
#include <stdlib.h>
   
int login(){
    int USERpin;
    int CORRECTpin = 9190;
    int attempts =3;

    while(attempts > 0){
        printf("Enter your PIN please:");
        scanf("%d", &USERpin);
        if(USERpin == CORRECTpin){
            printf("Access Granted\n Welcome!\n");
            return 1;
        }else{
            attempts--; 
            printf("Incorrect PIN. You have %d attempt(s)left.\n", attempts);
        }
    }
            if(attempts == 0){
                printf("Access Denied. No attempts left.\n");
                return 0;
            }

}
void USERmenu(){
    printf("=====ATM Menu=====\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");

}
void CheckBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);
}
void DepositMoney(float *balance){
    float deposit;
    printf("Enter amount to deposit please: $");
    scanf("%f", &deposit);
    if(deposit > 0){
        *balance += deposit;
        printf("Successfully deposited $%.2f\n Thank you!\n", deposit);
    }else{
        printf("Invalid deposit amount.\n");
    }
}
void WithdrawMoney(float *balance){
    float withdraw;
    printf("Enter amount to withdraw please: $");
    scanf("%f", &withdraw);
    if(withdraw > 0 && withdraw <= *balance){
        *balance -= withdraw;
        printf("Successfully withdrew $%.2f\n Thank you!\n", withdraw);
    }else if(withdraw > *balance){
        printf("Insufficient funds.\n");
    }else{
        printf("Invalid withdrawal amount.\n");
    }
}

int main(){
    float balance = 100000.0;
    int choice;
    if (!login()){
        return 0;
     
    }
    do{
        USERmenu();
        printf("Choose an option please:");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                CheckBalance(balance);
                break;
            case 2:
                DepositMoney(&balance);
                break;
            case 3:
                WithdrawMoney(&balance);
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }

    }while(choice != 4);
    return 0;
}



