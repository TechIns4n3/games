#include<stdio.h>
#include<windows.h>

//A Decision Making Game
/*
======================
======================
==                  ==
== Surviving Durban ==
==                  ==
== By : Kwanda      ==
==      Snethemba   ==
==      Cebo        ==
==      Khulekani   ==
==                  ==
======================
======================

The game starts with you fighting with your mom.
So you took a nap. Wake up only to find that your alcoholic mom has just stolen your wallet
Your wallet had R800 in it that you needed in order to travel to work.
You just moved to Durban in search for good oportunities. After 5 days of skipping work you receive an email
from your boss. The email reads: Hi {userName} after several days of missing work with no explainations we as
the board of directors have decided to let you go. We have not received any doctors note or any communication from
your side. We hope that everything will be ok after this. 
Have luck searching for a new job.

After 5 days of of thinking you find courage to confront your mom, and when you did the answers you got were not what
you had hoped to hear. Your mom tells you that you are the reason why her dreams did not come true, that when she was
supposed to be having fun with other people, she had to feed, buy you food and clean you everyday. She then goes on to
say that she wishes that you weren't born. She says that life would be easier. She wouldn't be behind in life.

She then says pack all of your cloths and tells you to find your own place to stay
Try To Survive In Durban
*/

int main(){

    //User Actions(run, hide, steal, hike)

    char userName[20];
    char answer;
    char userInput[20];
    int d = 5000; //delay  5000milliseconds

    printf("\n");//New Line
    printf("======================\n");
    printf("======================\n");
    printf("==                  ==\n");
    printf("== Surviving Durban ==\n");
    printf("==                  ==\n");
    printf("== By: Kwanda       ==\n");
    printf("==     Snethemba    ==\n");
    printf("==     Cebo         ==\n");
    printf("==     Khulekani    ==\n");
    printf("==                  ==\n");
    printf("======================\n");
    printf("======================\n");
    printf("\n");//New Line
    Sleep(d);//5000 milliseconds or 5 seconds
    system("cls");//Clears the screen

    printf("Are you ready to start, Y or N?\n");
    scanf("%c", &answer);

    if (answer == 'Y' || answer == 'y') //Start The Game
    {
        printf("Enter Your User Name:\n");
        scanf("%s", userName);

        printf("\n");//New Line
        printf("The game starts with you fighting with your mom.\n");
        printf("So you took a nap. Wake up only to find that your alcoholic mom has just stolen your wallet\n");
        printf("Your wallet had R800 in it that you needed in order to travel to work.\n"); 
        printf("You just moved to Durban in search for good oportunities.\nAfter 5 days of skipping work you receive an email from your boss.\n");
        printf("The email reads:\n");
        printf("Hi %s after several days of missing work with no explainations we as the board of directors have decided to let you go.\nWe have not received any doctors note or any communication from your side. We hope that everything will be ok after this.\nHave good luck searching for a new job.\n", userName);
    } 
    else if (answer == 'N' || answer == 'n')
    {
        printf("\nGoodbye\n");
        exit(0);
    } else{
        printf("\nInvaid Option!!!!\nTry Again");
    }
    
    

    


    
}