#include <stdio.h>
#include <windows.h>

    int main() {

    int USERpin;
    int CORRECTpin = 9190;
    int attempts; 
    int seconds;
    for (attempts = 1; attempts <= 3; attempts++) {

        printf("Please input your 4 digit PIN: ");
        scanf("%d", &USERpin);

        if (USERpin == CORRECTpin) {
            printf("Access Granted. Door Unlocked.\n");
            attempts = 4;  
        } 
        else {
            if (attempts == 3) {
                printf("Access Denied. Please wait 5 seconds...\n");
                Sleep(1000);
                printf("%d second(s) remaining.\n",4);
                Sleep(1000);
                printf("%d second(s) remaining.\n",3);    
                Sleep(1000);
                printf("%d second(s) remaining.\n",2);        
                Sleep(1000);
                printf("%d second(s) remaining.\n",1);        
                Sleep(1000);    


                printf("You can try again now.\n");
                attempts =1; 
            } 
            else {
                printf("Incorrect PIN. Try again.\n");
                printf("%d attempt(s) remaining.\n", 3 - attempts);
            }
        }
    }

    return 0;
}
