#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    srand(time(0));   //Seed random number generator
    

    // Name: JinRui
    // CTI 110 Section Number: 0005
    // Test Case 1: User enters -999 to quit
    // Test Case 2: User guesses the correct number
    int correctNum;
    int guess;

    correctNum = rand() % 10 + 1;
    cout << "Guess a number between 1 and 10, or enter -999 to quit:" << endl;
    cin >> guess;
    if (guess == correctNum) {
        cout << "Congratulations! You guessed the correct number!" << endl;
    } else {
        while (guess == -999) {
            cout << "You have quit the game." << endl;
        }
        cout << "Invalid input! Try again!" << endl;
    }
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
