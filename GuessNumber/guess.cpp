#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    srand(time(0));
    int secretNumber = rand()%100+1;
    int guess;
   cout << "Guess the number (between 1 and 100): ";
    while(true){
        cin>>guess;
        if(guess==secretNumber){
            cout<<"Correct! You guessed the number!" <<endl;
            break;
        }
        else if (guess < secretNumber){
            cout<<"Too low! Try again: ";
        }
        else{
            cout<<"Too high! Try again: ";
        }
    }
    return 0;
}