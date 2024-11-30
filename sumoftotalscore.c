#include <stdio.h>

int main() {
    int numPlayers, totalScore = 0;

    // Input number of players
    printf("Enter the number of players: ");
    scanf("%d", &numPlayers);

    // Declare an array to store scores
    int scores[numPlayers];

    // Input the scores for each player
    printf("Enter the scores for each player:\n");
    for (int i = 0; i < numPlayers; i++) {
        printf("Enter score for player %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Calculate the total score
    for (int i = 0; i < numPlayers; i++) {
        totalScore += scores[i];  // Add each player's score to the total
    }

    // Output the total score
    printf("\nThe total score of all players is: %d\n", totalScore);

    return 0;
}