#include <iostream>
using namespace std;

int main() {
    double temp;
    char choice;

    cout << "Temperature Converter\n";
    cout << "Choose conversion type:\n";
    cout << "C = Celsius to Fahrenheit\n";
    cout << "F = Fahrenheit to Celsius\n";
    cout << "Enter your choice (C/F): ";
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        double fahrenheit = (temp * 9/5) + 32;
        cout << temp << "°C = " << fahrenheit << "°F" << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        double celsius = (temp - 32) * 5/9;
        cout << temp << "°F = " << celsius << "°C" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
