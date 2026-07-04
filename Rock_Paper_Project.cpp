#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
string computer_enter() {
    int x = rand() % 3;
    if (x == 0)
        return "Rock";
    else if (x == 1)
        return "Paper";
    else
        return "Scissor";
}
string user_enter(char c) {
    if (c == 'r')
        return "Rock";
    else if (c == 'p')
        return "Paper";
    else if (c == 's')
        return "Scissor";
    else
        return "Invalid"; 
}
string checkwinner(string user, string computer) {
    if (user == computer)
        return "Draw";
    else if ((user == "Paper" && computer == "Rock") ||
             (user == "Scissor" && computer == "Paper") ||
             (user == "Rock" && computer == "Scissor"))
        return "oh! You win";
    else
        return "oh! Computer wins";
}
int main() {
    char N;
    srand(time(0));
    cout << "\n\n\t\t Welcome to Stone Paper Scissor Game \n\n";
    while (true) {
        cout << "Enter r for ROCK, p for PAPER, s for SCISSOR, or q to QUIT \n";
        cin >> N;
        if (N == 'q')//q->quit
		{
            cout << "Thanks for playing! Goodbye!\n";
            break;
        }

        string user = user_enter(N);
        if (user == "Invalid") {
    	cout << "Invalid input! Please try again.\n";
    	continue; 
        }
        string comp = computer_enter();
        string result = checkwinner(user, comp);
        cout << result << "\n";
        cout << "Your move : " << user << "\n";
        cout << "Computer's move : " << comp << "\n\n";
    }
    return 0;
}
