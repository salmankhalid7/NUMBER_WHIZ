# Number Whiz

## Introduction

**Number Whiz** is a simple betting game implemented in C++. In this game, players bet on a number between 1 and 10, and a random number is generated to determine if they win or lose based on their guess.

## Features

- **User Interaction**: Players are prompted to enter their name, age, and balance.
- **Betting Mechanics**: Players place a bet and choose a number between 1 and 10.
- **Random Number Generation**: The game randomly generates a number to determine if the player's guess is correct.
- **Result Display**: The game provides feedback on whether the player won or lost and displays the updated balance.

## How to Play

1. **Start the Game**:
   - Run the program. The initial welcome message will greet you.

2. **Enter Player Information**:
   - Input your name and age when prompted.

3. **Understand the Rules**:
   - The rules of the game will be displayed:
     1. Choose a number between 1 and 10.
     2. If the number matches the randomly generated number, you win 10 times your bet.
     3. If the number does not match, you lose the amount you bet.

4. **Input Your Financial Information**:
   - Enter your total balance.
   - Place a bet amount, ensuring it does not exceed your total balance.

5. **Place Your Bet**:
   - Choose a number between 1 and 10 to bet on.

6. **See the Result**:
   - The game will generate a random number and compare it to your guess.
   - The result will be displayed along with your updated balance.

## Code Overview

The main elements of the code include:

- **Variable Declaration**: Variables to store player information, balance, bet amount, guess, and random number.
- **User Interaction**: Functions to get user input and display information.
- **Random Number Generation**: Used to determine the winning number.
- **Result Calculation**: Determines if the player wins or loses based on their guess.

## Example

Here's a brief example of what the gameplay might look like:



```
<<WELCOME TO THE LUCKY SPIN>>

ENTER YOUR NAME: John
ENTER YOUR AGE: 25

NAME: John
AGE: 25

<<RULES FOR LUCKY SPIN>>
1: CHOOSE A NUMBER BETWEEN 1 AND 10
2: Winner gets 10 times the money bet
3: Wrong bet, and you lose the amount you bet

ENTER THE TOTAL BALANCE: 1000
PLACE AN AMOUNT FOR BET: 100

<<NOW YOU HAVE TO PLACE A BET ON ANY NUMBER BETWEEN 1 AND 10>>
ENTER A NUMBER BETWEEN 1 AND 10: 5

<<PLAYER'S INFORMATION>>
NAME: John
AGE: 25

<<FINANCIAL STATISTICS>>
TOTAL BALANCE: 1000
BET AMOUNT: 100

<<BET INFORMATION>>
CHOSEN NUMBER: 5

THE WINNING NUMBER IS (7)
NICE TRY!
YOU HAVE LOST THE BET
YOUR REMAINING BALANCE IS: (900)
```

## Running the Game

To run the game, compile the C++ code using a compiler like `g++` and execute the resulting binary:

```bash
g++ number_whiz.cpp -o number_whiz
./number_whiz
```

<hr>

## Contribution

Feel free to contribute to the project by submitting pull requests or opening issues. Your feedback and improvements are welcome!

## License

This project is licensed under the MIT License. See the LICENSE file for details.

## Contact

For any inquiries, please reach out to [m.salmankhalid123@gmail.com](mailto:m.salmankhalid123@gmail.com).
