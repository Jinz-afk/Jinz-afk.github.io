# Random Guessing Game Flowchart
## Description:
I created a flowchart diagram to show how a number guessing game is going to function. I diagrammed how the game should flow from where decisions happen, when to loop back, and how the game ends when the correct number is guessed. I also added validity checks within the flow chart to make sure the program if made was going to properly function.
## Flow Chart
```mermaid
graph TD;
    Start((Begin));
    Start --> PickNumber["Pick a number 1 through 10"];
    PickNumber --> PromptGuess["Display: Guess a number 1 through 10"];
    PromptGuess --> UserGuess["Input guess"];
    UserGuess --> CheckNum{"Is it 1-10?"};
    CheckNum -- "nope" --> Invalid["Display: Guess again!"];
    Invalid --> PromptGuess;
    CheckNum -- "yep" --> IsCorrect{"Is the number correct?"};
    IsCorrect -- "nope" --> Compare{"Is the number too high or too low?"};
    Compare -- "high" --> HighMsg["Too high"];
    Compare -- "low" --> LowMsg["Too low"];
    HighMsg --> PromptGuess;
    LowMsg --> PromptGuess;
    Win --> End((Done));
    IsCorrect -- "yeah" --> Win["Nice!"];
