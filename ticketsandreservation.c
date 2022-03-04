#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main(){
    //tickets, Username
    //bus tickets, train tickets, plane tickets
    //include locations
    //for now we're doing national bookings
    char signupUsername[20], loginUsername[20], signupEmail[50],loginEmail[50], signupPassword[50],loginPassword[50];
    char userAccExist, createNewAcc;
    printf("\n**************************************************\n");
    printf("\n**Welcome to the Online Ticket Bookings Platform**\n");
    printf("\n**************************************************\n");
    printf("\nIn this platform users are able to book tickets  for\nFlights, Buses, Trains\n\nDo You have an account with us:(Type 'Y' for Yes Or 'N' for no) \n?");
    scanf("%c", &userAccExist);

    if (userAccExist == 'Y' || userAccExist == 'y')
    {
        /* code */
    } else if (userAccExist == 'N' || userAccExist == 'n')
    {
        printf("\nWould You like create a new account?:(Type 'Y' for yes or 'N' for no)\n");
        scanf("%c", &createNewAcc);

        if (createNewAcc == 'Y' || createNewAcc == 'y')
    {
        printf("\nCreate Your New Account\n");
    } else if (createNewAcc == 'N' || createNewAcc == 'n')
    {
        printf("Thank You For Using Our System. Bye");
        exit(0);
    }
    }
    

}