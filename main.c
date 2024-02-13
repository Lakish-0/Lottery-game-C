#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int secretNumber = 7;
    int guess;
    int guessLimit = 3;
    system("color 70");

    printf("Hello this is lottery game.\nYou have 3 tries to win lottery.\nGood Luck!\n");
    while(secretNumber!=guess && guessLimit != 0){
        printf("Enter a Number:");
        scanf("%d", &guess);
        guessLimit--;

    }
    if(guessLimit==0 && secretNumber !=guess){
        printf("You Loose!!.Better Luck Next Time.");
    }else if (guessLimit==2){
        printf("Wow you are genius.You won lottery in first try.Congratulations....\nLottery Amount was $1 billion");
    }
     else if(guess==secretNumber){
        printf("You won 1 billions $$...");
    }



    return 0;
}
