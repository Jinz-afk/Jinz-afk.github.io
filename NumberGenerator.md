# Random Guessing Game Flowchart

- The program randomly selects a number between 1 and 10.
- The user is told to guess a number.
- The programs checks if the input is a number.
- The program checks if the input is a number within the range of 1 through 10.
- If the input is too high or too low a feedback is provided.
- The user keeps guessing until the correct number is put in.

  
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
