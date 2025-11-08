#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int computerChoice = rand() % 3; 
    int userChoice;

    cout << "Choose an option:\n";
    cout << "0 = Rock\n1 = Paper\n2 = Scissors\n";
    cout << "Enter your choice: ";
    cin >> userChoice;

    cout << "Computer chose: " << computerChoice << endl;

    if(userChoice == computerChoice){
        cout << "It's a Draw!";
    }
    else if((userChoice == 0 && computerChoice == 2) ||
            (userChoice == 1 && computerChoice == 0) ||
            (userChoice == 2 && computerChoice == 1)){
        cout << "You Win!";
    }
    else{
        cout << "You Lose!";
    }

    return 0;
}
