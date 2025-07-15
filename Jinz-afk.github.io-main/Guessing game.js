function main() {
    // Name: JinRui
    // CTI 110 Section Number: 0005
    // Test Case 1: User enters -999 to quit
    // Test Case 2: User guesses the correct number
    var correctNum;
    var guess;

    correctNum = Math.floor(Math.random() * 10) + 1;
    window.alert("Guess a number between 1 and 10, or enter -999 to quit:");
    guess = Number(window.prompt('Enter a value for guess'));
    if (guess == correctNum) {
        window.alert("Congratulations! You guessed the correct number!");
    } else {
        while (guess == -999) {
            window.alert("You have quit the game.");
        }
        window.alert("Invalid input! Try again!");
    }
}
