#include <iostream>
using namespace std;

int main() {
    int balance = 1000; // initial balance
    int pin = 1234;     // preset PIN
    int enteredPin;
    int choice;
    int amount;

    cout << "Welcome to Simple ATM Simulation!" << endl;

    // PIN verification
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN! Access denied." << endl;
        return 0; // exit program
    }

    // ATM menu
    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                balance += amount;
                cout << "$" << amount << " deposited successfully!" << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully!" << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
