#include "hangman.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// function to display the welcome message
void displayWelcomeMessage(void) {
    printf("Hello! Want to play Hangman? Select 'Y' or 'N'\n");
}

// function to load words from a file into an array
void loadWordsFromFile(char words[][WORD_LENGTH + 1], const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < MAX_WORDS; ++i) {
        if (fscanf(file, "%s", words[i]) != 1) {
            perror("Error reading from file");
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);
}

// function to initialize the game
void initializeGame(struct HangmanGame *game) {
    // select a random word
    int index = rand() % MAX_WORDS;
    strcpy(game->randomWord, game->words[index]);
    game->wordLength = strlen(game->randomWord);
    game->attemptsLeft = MAX_ATTEMPTS;

    // initialize guessed word with underscores
    for (int i = 0; i < game->wordLength; ++i) {
        game->guessedWord[i] = '_';
    }
    game->guessedWord[game->wordLength] = '\0'; // null terminate the string

    // display initial state
    printf("Your word is the following: %s\n", game->guessedWord);
    displayHangman(game->attemptsLeft);
}

// displays hangman ASCII art corresponding to the number of attempts left
void displayHangman(int attemptsLeft) {
    switch (attemptsLeft) {
        case 6:
            printf("_______\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("_______\n");
            break;
        case 5:
            printf("_______\n");
            printf("|   O\n");
            printf("|\n");
            printf("|\n");
            printf("|\n");
            printf("_______\n");
            break;
        case 4:
            printf("_______\n");
            printf("|   O\n");
            printf("|   |\n");
            printf("|\n");
            printf("|\n");
            printf("_______\n");
            break;
        case 3:
            printf("_______\n");
            printf("|   O\n");
            printf("|  /|\n");
            printf("|\n");
            printf("|\n");
            printf("_______\n");
            break;
        case 2:
            printf("_______\n");
            printf("|   O\n");
            printf("|  /|\\\n");
            printf("|\n");
            printf("|\n");
            printf("_______\n");
            break;
        case 1:
            printf("_______\n");
            printf("|   O\n");
            printf("|  /|\\\n");
            printf("|  /\n");
            printf("|\n");
            printf("_______\n");
            break;
        case 0:
            printf("_______\n");
            printf("|   O\n");
            printf("|  /|\\\n");
            printf("|  / \\\n");
            printf("|\n");
            printf("_______\n");
            break;
    }
}

int isGuessCorrect(struct HangmanGame *game, char guess) {
    int correctGuess = 0;
    for (int i = 0; i < game->wordLength; ++i) {
        if (game->randomWord[i] == guess) {
            game->guessedWord[i] = guess;
            correctGuess = 1;
        }
    }
    return correctGuess;
}

// function to check if the player has won the game
// checks if a guessed letter is correct and updates the game state accordingly
int checkWin(struct HangmanGame *game) {
    for (int i = 0; i < game->wordLength; ++i) {
        if (game->guessedWord[i] == '_') {
            return 0; // not all letters guessed yet
        }
    }
    return 1; // all letters guessed correctly
}

// function to play the Hangman game
void playHangmanGame(void) {
    srand(time(NULL)); // initializes the random number generator with current time as seed
    struct HangmanGame game; // create a HangmanGame struct

    // load words from file into game.words array
    loadWordsFromFile(game.words, "Project_Names.txt");

    displayWelcomeMessage();

    char ready;
    printf("Type 'Y' if you are ready to begin: ");
    scanf(" %c", &ready);
    if (tolower(ready) != 'y') {
        printf("Exiting the game.\n");
        return;
    }

    do {
        // initialize the game with a random word
        initializeGame(&game);

         // main game loop
        while (game.attemptsLeft > 0) {
            printf("Guess a letter!\n");
            char guess;
            scanf(" %c", &guess);
            guess = tolower(guess); // convert guess to lowercase

            // check if the guessed letter is correct
            if (isGuessCorrect(&game, guess)) {
                printf("Correct! Here is the word: %s\n", game.guessedWord);
            } else {
                game.attemptsLeft--;
                printf("Incorrect! Here is the word: %s\n", game.guessedWord);
                if (game.attemptsLeft > 0) {
                    printf("You have %d more chances left\n", game.attemptsLeft);
                }
                displayHangman(game.attemptsLeft);
            }

            // check if the player has won
            if (checkWin(&game)) {
                printf("Congratulations! You won!\n");
                break;
            }
        }

        // check if the player lost
        if (game.attemptsLeft == 0) {
            printf("You lost :( !\n");
        }

        // ask if the player wants to play again
        printf("Do you want to play again? Press 'Y' for yes, Press 'N' for no and exiting the game.\n");
        char playChoice;
        scanf(" %c", &playChoice);
        if (tolower(playChoice) != 'y') {
            break; // exit loop if player does not want to play again
        }
    } while (1);

    printf("Thanks for playing Hangman!\n");
}