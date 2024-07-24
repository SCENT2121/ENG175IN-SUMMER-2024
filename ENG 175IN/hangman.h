#ifndef HANGMAN_H
#define HANGMAN_H

#define MAX_WORDS 50
#define WORD_LENGTH 8
#define MAX_ATTEMPTS 6

// structure to hold game data
struct HangmanGame {
    char words[MAX_WORDS][WORD_LENGTH + 1];
    char randomWord[WORD_LENGTH + 1];
    char guessedWord[WORD_LENGTH + 1];
    int wordLength;
    int attemptsLeft;
};

// declaration of functions
void displayWelcomeMessage(void);
void loadWordsFromFile(char words[][WORD_LENGTH + 1], const char *filename);
void initializeGame(struct HangmanGame *game);
void displayHangman(int attemptsLeft);
int isGuessCorrect(struct HangmanGame *game, char guess);
int checkWin(struct HangmanGame *game);
void playHangmanGame(void);

#endif /* HANGMAN_H */