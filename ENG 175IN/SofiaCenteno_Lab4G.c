#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // seed random number generator with current time

    // player names and number of rounds
    char player1[100], player2[100];
    int rounds;
    printf("Enter player 1 name: ");
    scanf("%s", player1);
    printf("Enter player 2 name: ");
    scanf("%s", player2);
    do {
        printf("Enter number of rounds (> 0): ");
        scanf("%d", &rounds);
        if (rounds <= 0) {
            printf("Rounds must be > 0\n");
        }
    } while (rounds <= 0);

    printf("%s Vs %s for %d rounds\n", player1, player2, rounds);

    // play rounds and announce winner
    int p1_wins = 0, p2_wins = 0;
    for (int i = 0; i < rounds; i++) {
        int p1_choice, p2_choice;
        do {
            p1_choice = rand() % 3;
            p2_choice = rand() % 3;
        } while (p1_choice == p2_choice);

        if ((p1_choice == 0 && p2_choice == 2) || (p1_choice == 1 && p2_choice == 0) || (p1_choice == 2 && p2_choice == 1)) {
            printf("%s wins with ", player1);
            p1_wins++;
        } else if ((p2_choice == 0 && p1_choice == 2) || (p2_choice == 1 && p1_choice == 0) || (p2_choice == 2 && p1_choice == 1)) {
            printf("%s wins with ", player2);
            p2_wins++;
        } else {
            printf("Tie");
        }

        // player choices
        switch (p1_choice) {
            case 0:
                printf("rock\n");
                break;
            case 1:
                printf("paper\n");
                break;
            case 2:
                printf("scissors\n");
                break;
        }
    }

    // total wins for indivisual players
    printf("%s wins %d and %s wins %d\n", player1, p1_wins, player2, p2_wins);

    return 0;
}