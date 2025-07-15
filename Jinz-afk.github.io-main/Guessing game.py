import random
random.seed()   #Prepare random number generator


# Name: JinRui
# CTI 110 Section Number: 0005
# Test Case 1: User enters -999 to quit
# Test Case 2: User guesses the correct number
correctNum = int(random.random() * 10) + 1
print("Guess a number between 1 and 10, or enter -999 to quit:")
guess = int(input())
if guess == correctNum:
    print("Congratulations! You guessed the correct number!")
else:
    while guess == -999:
        print("You have quit the game.")
    print("Invalid input! Try again!")
