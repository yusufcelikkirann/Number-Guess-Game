#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaring global variables.
int digit,loop,loop1, guess, guessing[10] , guesses[100],true, false, match, counter=0, indexGuess = 0,
temp = 0, random, digits [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

//Declaring functions.
void welcome ();
void createNumber();
void guessNumberAndCompare();

//Welcome message and user input own digit.
void welcome () {
    printf("-----------------------------\n");
    printf("----- NUMBER GUESS GAME -----\n");
    printf("-----------------------------\n");
    printf("\n\n\n");


    char message [] = "Welcome to Number Guess game.\n"
                    "If you want to start this play game\n"
                    "you should choose a number which is be\n"
                    "bigger than four ('4') and smaller than ten ('10')\n"
                    "to create a random number your computer.\n";
    printf("%s" ,message);

    printf("Your digit=");
    scanf("%d" ,&digit);

    if (digit < 4 || digit > 10) { //If user enter a wrong digit program is aborting.
        printf("You are entered a wrong value so program is aborting now.");
        exit(EXIT_SUCCESS);
    }
}

//Create random number.
void createNumber() {

    switch (digit) {

        case 4:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;

        case 5:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;

        case 6:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;
        case 7:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;
        case 8:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;
        case 9:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;
        case 10:

            random = rand() % 9;

            if (random != 9) {
                for (loop = 0 ; loop < digit ; loop++) {
                    srand(time(NULL));
                    random = rand() % 9;
                    temp = digits[random];
                    digits[random] = digits[loop];
                    digits[loop] = temp;

                }
            }else {
                random = rand() % 9;
            }

            break;
        default:
            break;
    }
}

//User enter own number and the computer is comparing.
void guessNumberAndCompare() {

    char message[] = "\nComputer created a number.\n"
                   "You can guess the number at now.\n"
                   "Don't forget your numbers' digits are must be different.\n";

    printf("%s" ,message);

    do {

        match = 0;
        true = 0;
        false = 0;

        printf("\n");
        printf("Your Number=");

        scanf("%d" ,&guess);

        while (true != digit) {
            guesses[indexGuess] = guess;
            indexGuess++;
            break;
        }

        //The number (which is entering by the user) digitizing for comparing.
        switch (digit) {
            case 4:

                guessing[0] = guess / 1000;
                guess %= 1000;
                guessing[1] = guess / 100;
                guess %= 100;
                guessing[2] = guess / 10;
                guess %= 10;
                guessing[3] = guess;

                break;
            case 5:

                guessing[0] = guess / 10000;
                guess %= 10000;
                guessing[1] = guess / 1000;
                guess %= 1000;
                guessing[2] = guess / 100;
                guess %= 100;
                guessing[3] = guess / 10;
                guess %= 10;
                guessing[4] = guess;

                break;
            case 6:

                guessing[0] = guess / 100000;
                guess %= 100000;
                guessing[1] = guess / 10000;
                guess %= 10000;
                guessing[2] = guess / 1000;
                guess %= 1000;
                guessing[3] = guess / 100;
                guess %= 100;
                guessing[4] = guess / 10;
                guess %= 10;
                guessing[5] = guess;

                break;
            case 7:

                guessing[0] = guess / 1000000;
                guess %= 1000000;
                guessing[1] = guess / 100000;
                guess %= 100000;
                guessing[2] = guess / 10000;
                guess %= 10000;
                guessing[3] = guess / 1000;
                guess %= 1000;
                guessing[4] = guess / 100;
                guess %= 100;
                guessing[5] = guess / 10;
                guess %= 10;
                guessing[6] = guess;

                break;
            case 8:

                guessing[0] = guess / 10000000;
                guess %= 10000000;
                guessing[1] = guess / 1000000;
                guess %= 1000000;
                guessing[2] = guess / 100000;
                guess %= 100000;
                guessing[3] = guess / 10000;
                guess %= 10000;
                guessing[4] = guess / 1000;
                guess %= 1000;
                guessing[5] = guess / 100;
                guess %= 100;
                guessing[6] = guess / 10;
                guess %= 10;
                guessing[7] = guess;

                break;
            case 9:

                guessing[0] = guess / 100000000;
                guess %= 100000000;
                guessing[1] = guess / 10000000;
                guess %= 10000000;
                guessing[2] = guess / 1000000;
                guess %= 1000000;
                guessing[3] = guess / 100000;
                guess %= 100000;
                guessing[4] = guess / 10000;
                guess %= 10000;
                guessing[5] = guess / 1000;
                guess %= 1000;
                guessing[6] = guess / 100;
                guess %= 100;
                guessing[7] = guess / 10;
                guess %= 10;
                guessing[8] = guess;


                break;
            case 10:

                guessing[0] = guess / 1000000000;
                guess %= 1000000000;
                guessing[1] = guess / 100000000;
                guess %= 100000000;
                guessing[2] = guess / 10000000;
                guess %= 10000000;
                guessing[3] = guess / 1000000;
                guess %= 1000000;
                guessing[4] = guess / 100000;
                guess %= 100000;
                guessing[5] = guess / 10000;
                guess %= 10000;
                guessing[6] = guess / 1000;
                guess %= 1000;
                guessing[7] = guess / 100;
                guess %= 100;
                guessing[8] = guess / 10;
                guess %= 10;
                guessing[9] = guess;

                break;
            default:
                break;
        }

        //Comparing.
        for (loop = 0; loop < digit; loop++) {

            if (guessing[loop] == digits[loop]) {
                true++; //If a digit places' is true, the true variable will increase.
            }

            for (loop1 = 0; loop1 < digit; loop1++) {
                if (guessing[loop1] == digits[loop]) {
                    match++;// If a digit has been computer's number the match variable will increase.
                }
            }
        }

        false = digit - true; //Founding places' wrong digits.

        printf("\nThere are %d digits are matched.\n", match);
        printf("There are %d digits' places are true.\n",true);
        printf("There are %d digits' places are false.\n",false);

        counter++; //Counting number of guessing.

    }while (true != digit);

    printf("\n");
    printf("Your guesses (the smallest to the largest) = ");

    //Sorting the guesses.
    for(loop = 1 ; loop < indexGuess ; loop++) {

        for (loop1 = 0 ; loop1 < indexGuess - 1 ; loop1++) {

            if (guesses[loop1] > guesses[loop1 + 1]) {
                temp = guesses[loop1];
                guesses[loop1] = guesses[loop1 + 1];
                guesses[loop1 + 1] = temp;
            }

        }
    }

    //Print sorted guesses.
    for (loop = 0 ; loop < indexGuess ; loop++) {
        printf("%d\t" ,guesses[loop]);
    }

    printf("\n");

    printf("\nYou are %d numbers guessed in this game.\n",counter); // End of the game.

}

    int main() {
        welcome();
        createNumber();
        guessNumberAndCompare();
        return 0;
    }