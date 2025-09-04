#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int user, computer;

    srand(time(0));

    printf("Choose:\n0 - Rock\n1 - Paper\n2 - Scissors\n");
    scanf("%d", &user);

    if (user < 0 || user > 2) {
        printf("Invalid choice!\n");
        return 1;
    }

    computer = rand() % 3;

    printf("You: %s\n", choices[user]);
    printf("Computer: %s\n", choices[computer]);

    if (user == computer)
        printf("Draw!\n");
    else if ((user == 0 && computer == 2) ||
             (user == 1 && computer == 0) ||
             (user == 2 && computer == 1))
        printf("You Win!\n");
    else
        printf("You Lose!\n");

    return 0;
}
