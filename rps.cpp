#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string choices[3] = {"Rock", "Paper", "Scissors"};
    int user, computer;

    srand(time(0));

    cout << "Choose:\n0 - Rock\n1 - Paper\n2 - Scissors\n";
    cin >> user;

    if (user < 0 || user > 2) {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    computer = rand() % 3;

    cout << "You: " << choices[user] << endl;
    cout << "Computer: " << choices[computer] << endl;

    if (user == computer)
        cout << "Draw!" << endl;
    else if ((user == 0 && computer == 2) ||
             (user == 1 && computer == 0) ||
             (user == 2 && computer == 1))
        cout << "You Win!" << endl;
    else
        cout << "You Lose!" << endl;

    return 0;
}
